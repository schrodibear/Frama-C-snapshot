/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int main(void)
{
  int __retres;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  int x = 0;
  x ++;
  /*@ assert sizeof(int) ≡ sizeof(x); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"sizeof(int) == sizeof(x)",8);
  __retres = 0;
  return __retres;
}


