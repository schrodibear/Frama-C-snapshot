[kernel] Parsing tests/saveload/multi_project.i (no preprocessing)
[scf] beginning constant propagation
[eva] Analyzing a complete application starting at main
[eva] Computing initial state
[eva] Initial state computed
[eva:initial-state] Values of globals at initialization
  
[eva] computing for function f <- main.
  Called from tests/saveload/multi_project.i:14.
[eva] Recording results for f
[eva] Done for function f
[eva] tests/saveload/multi_project.i:15: assertion got status valid.
[eva] Recording results for main
[eva] done for function main
/* Generated by Frama-C */
int f(int x)
{
  int __retres;
  __retres = 4;
  return __retres;
}

int main(void)
{
  int __retres;
  int x = 2;
  int y = f(2);
  /*@ assert y ≡ 4; */ ;
  __retres = 8;
  return __retres;
}


[scf] constant propagation done
