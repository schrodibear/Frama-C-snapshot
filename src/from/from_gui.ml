(**************************************************************************)
(*                                                                        *)
(*  This file is part of Frama-C.                                         *)
(*                                                                        *)
(*  Copyright (C) 2007-2008                                               *)
(*    CEA (Commissariat � l'�nergie Atomique)                             *)
(*                                                                        *)
(*  you can redistribute it and/or modify it under the terms of the GNU   *)
(*  Lesser General Public License as published by the Free Software       *)
(*  Foundation, version 2.1.                                              *)
(*                                                                        *)
(*  It is distributed in the hope that it will be useful,                 *)
(*  but WITHOUT ANY WARRANTY; without even the implied warranty of        *)
(*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *)
(*  GNU Lesser General Public License for more details.                   *)
(*                                                                        *)
(*  See the GNU Lesser General Public License version 2.1                 *)
(*  for more details (enclosed in the file licenses/LGPLv2.1).            *)
(*                                                                        *)
(**************************************************************************)


(* $Id: from_gui.ml,v 1.5 2008/07/11 11:52:18 uid528 Exp $ *)

open Db
open Cil_types
open Cil

let main (main_ui:Design.main_window_extension_points) =

  let filetree_selector 
      ~was_activated ~activating globals = 
    if Value.is_computed () then begin 
      if not was_activated && activating then begin match globals with
      | [GFun ({svar=v},_)] -> 
          begin try 
            let kf = Globals.Functions.get v in
            if !From.is_computed kf then 
              let s = fprintf_to_string "@[Functional dependencies:@\n%a@]@." !From.pretty kf in
              main_ui#annot_window#buffer#insert s
          with Not_found -> () 
          end
      | _ -> ();
      end;
    end
  in
  main_ui#file_tree#add_select_function filetree_selector


let () =
  Design.register_extension main



(** Extension of the GUI in order to support the value analysis.
    No function is exported. *)

(*
Local Variables:
compile-command: "LC_ALL=C make -C ../.. -j"
End:
*)

