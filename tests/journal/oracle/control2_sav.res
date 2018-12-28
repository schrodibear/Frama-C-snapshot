[kernel] Parsing tests/journal/control2.c (with preprocessing)
[eva] Analyzing a complete application starting at f
[eva] Computing initial state
[eva] Initial state computed
[eva:initial-state] Values of globals at initialization
  x ∈ {0}
  y ∈ {0}
  c ∈ {0}
  d ∈ {0}
[eva] tests/journal/control2.c:12: starting to merge loop iterations
[eva:alarm] tests/journal/control2.c:15: Warning: 
  signed overflow. assert x + 1 ≤ 2147483647;
[eva] done for function f
[eva] ====== VALUES COMPUTED ======
[eva:final-states] Values at end of function f:
  x ∈ [0..2147483647]
  i ∈ {4}
[from] Computing for function f
[from] Done for function f
[kernel] Warning: ignoring source files specified on the command line while loading a global initial context.
[eva] Analyzing an incomplete application starting at f
[eva] Computing initial state
[eva] Initial state computed
[eva:initial-state] Values of globals at initialization
  x ∈ [--..--]
  y ∈ [--..--]
  c ∈ [--..--]
  d ∈ [--..--]
[eva:alarm] tests/journal/control2.c:13: Warning: 
  signed overflow. assert y + 1 ≤ 2147483647;
[eva:alarm] tests/journal/control2.c:13: Warning: 
  signed overflow. assert x + 1 ≤ 2147483647;
[eva:alarm] tests/journal/control2.c:15: Warning: 
  signed overflow. assert x + 1 ≤ 2147483647;
[eva] done for function f
[eva] ====== VALUES COMPUTED ======
[eva:final-states] Values at end of function f:
  x ∈ [--..--]
  y ∈ [--..--]
  i ∈ {4}
[from] Computing for function f
[from] Done for function f
[from] ====== DEPENDENCIES COMPUTED ======
  These dependencies hold at termination for the executions that terminate:
[from] Function f:
  x FROM x; c; d (and SELF)
  y FROM y; c; d (and SELF)
[from] ====== END OF DEPENDENCIES ======
[inout] Out (internal) for function f:
    x; y; i
[kernel] writing journal in file `tests/journal/result/control_journal_next2.ml'.
