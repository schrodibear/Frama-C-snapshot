(* This file was originally generated by why.
   It can be modified; only the generated parts will be overwritten. *)

Require Why.


(*Why*) Parameter set_and_test_zero :
  (v: Z)(x: Z)
  (sig_2 Z bool [x0: Z][result: bool](`x0 = v` /\
   ((if result then `x0 = 0` else `x0 <> 0`)))).

(* Why obligation from file "good/set.mlw", characters 208-209 *)
Lemma p_po_1 : 
  (x0: Z)
  (Test1: `x0 = 0` /\ `x0 <> 0`)
  `2 = 1`.
Proof.
Intros; Omega.
Save.

(*Why*) Parameter set_and_test_nzero :
  (v: Z)(x: Z)
  (sig_2 Z bool [x0: Z][result: bool](`x0 = v` /\
   ((if result then `x0 <> 0` else `x0 = 0`)))).

(* Why obligation from file "good/set.mlw", characters 446-457 *)
Lemma p2_po_1 : 
  (y: Z)
  (Pre6: `y >= 0`)
  (Variant1: Z)
  (y0: Z)
  (Pre5: Variant1 = y0)
  (Pre4: `y0 >= 0`)
  (x1: Z)
  (Test2: `x1 = y0` /\ `x1 <> 0`)
  (Pre3: `y0 >= 0`)
  (y1: Z)
  (Post1: y1 = `y0 - 1`)
  `y1 >= 0` /\ (Zwf `0` y1 y0).
Proof.
Unfold Zwf; Intuition.
Save.

(* Why obligation from file "good/set.mlw", characters 358-478 *)
Lemma p2_po_2 : 
  (y: Z)
  (Pre6: `y >= 0`)
  (Variant1: Z)
  (y0: Z)
  (Pre5: Variant1 = y0)
  (Pre4: `y0 >= 0`)
  (x1: Z)
  (Test1: `x1 = y0` /\ `x1 = 0`)
  (Pre2: `y0 >= 0`)
  `y0 = 0`.
Proof.
Intuition.
Save.

(* Why obligation from file "good/set.mlw", characters 559-560 *)
Lemma p3_po_1 : 
  (y: Z)
  (Pre4: `y >= 0`)
  (Variant1: Z)
  (y0: Z)
  (Pre3: Variant1 = y0)
  (Pre2: `y0 >= 0`)
  (Test2: true = true)
  (x1: Z)
  (b: bool)
  (Post10: `x1 = y0` /\ ((if b then `x1 <> 0` else `x1 = 0`)))
  (if b then ((y:Z) (y = `y0 - 1` -> `y >= 0` /\ (Zwf `0` y y0)))
   else `y0 = 0`).
Proof.
Unfold Zwf; Destruct b; Intuition.
Save.

(* Why obligation from file "good/set.mlw", characters 683-729 *)
Lemma p4_po_1 : 
  (y: Z)
  (Pre4: `y >= 1`)
  (Variant1: Z)
  (y0: Z)
  (Pre3: Variant1 = y0)
  (Pre2: `y0 >= 1`)
  (Test2: true = true)
  (y1: Z)
  (Post1: y1 = `y0 - 1`)
  (x1: Z)
  (result1: bool)
  (Post10: `x1 = y1` /\ ((if result1 then `x1 <> 0` else `x1 = 0`)))
  (if result1 then `y1 >= 1` /\ (Zwf `0` y1 y0) else `y1 = 0`).
Proof.
Unfold Zwf; Destruct result1; Intuition.
Save.

