void f () {
  int x = 0;
 L:
  x++;
  x++;
  /*@ assert \at(x,L) == 0; */
  /*@ assert \at(x==0,L); */
}

int g(int i) {
 lab:
  //@ assert i == \at(i,lab);
  return i;
}
