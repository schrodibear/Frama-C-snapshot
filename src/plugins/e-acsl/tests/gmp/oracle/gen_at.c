/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int A = 0;
/*@ ensures \at(A,Post) ≡ 3; */
void __gen_e_acsl_f(void);

void f(void)
{
  int __gen_e_acsl_at_4;
  int __gen_e_acsl_at_3;
  int __gen_e_acsl_at_2;
  int __gen_e_acsl_at;
  __gen_e_acsl_at_3 = A;
  __gen_e_acsl_at = A;
  A = 1;
  F: {
       __gen_e_acsl_at_4 = __gen_e_acsl_at_3;
       __gen_e_acsl_at_2 = A;
       A = 2;
     }
  /*@ assert \at(A,Pre) ≡ 0; */
  __e_acsl_assert(__gen_e_acsl_at == 0,(char *)"Assertion",(char *)"f",
                  (char *)"\\at(A,Pre) == 0",11);
  /*@ assert \at(A,F) ≡ 1; */
  __e_acsl_assert(__gen_e_acsl_at_2 == 1,(char *)"Assertion",(char *)"f",
                  (char *)"\\at(A,F) == 1",12);
  /*@ assert \at(A,Here) ≡ 2; */
  __e_acsl_assert(A == 2,(char *)"Assertion",(char *)"f",
                  (char *)"\\at(A,Here) == 2",13);
  /*@ assert \at(\at(A,Pre),F) ≡ 0; */
  __e_acsl_assert(__gen_e_acsl_at_4 == 0,(char *)"Assertion",(char *)"f",
                  (char *)"\\at(\\at(A,Pre),F) == 0",14);
  A = 3;
  return;
}

void g(int *p, int *q)
{
  int __gen_e_acsl_at_3;
  int __gen_e_acsl_at_2;
  int __gen_e_acsl_at;
  __e_acsl_store_block((void *)(& q),(size_t)8);
  __e_acsl_store_block((void *)(& p),(size_t)8);
  __e_acsl_initialize((void *)p,sizeof(int));
  *p = 0;
  __e_acsl_initialize((void *)(p + 1),sizeof(int));
  *(p + 1) = 1;
  __e_acsl_initialize((void *)q,sizeof(int));
  *q = 0;
  L1:
  {
    {
      int __gen_e_acsl_valid_read_3;
      __gen_e_acsl_valid_read_3 = __e_acsl_valid_read((void *)q,sizeof(int),
                                                      (void *)q,
                                                      (void *)(& q));
      __e_acsl_assert(__gen_e_acsl_valid_read_3,(char *)"RTE",(char *)"g",
                      (char *)"mem_access: \\valid_read(q)",28);
      __gen_e_acsl_at_3 = *q;
    }
    {
      int __gen_e_acsl_valid_read;
      __gen_e_acsl_valid_read = __e_acsl_valid_read((void *)q,sizeof(int),
                                                    (void *)q,(void *)(& q));
      __e_acsl_assert(__gen_e_acsl_valid_read,(char *)"RTE",(char *)"g",
                      (char *)"mem_access: \\valid_read(q)",26);
      __gen_e_acsl_at = *q;
    }
    __e_acsl_initialize((void *)p,sizeof(int));
    *p = 2;
  }
  __e_acsl_initialize((void *)(p + 1),sizeof(int));
  *(p + 1) = 3;
  __e_acsl_initialize((void *)q,sizeof(int));
  *q = 1;
  L2:
  {
    {
      int __gen_e_acsl_valid_read_2;
      __gen_e_acsl_valid_read_2 = __e_acsl_valid_read((void *)(p + __gen_e_acsl_at),
                                                      sizeof(int),(void *)p,
                                                      (void *)(& p));
      __e_acsl_assert(__gen_e_acsl_valid_read_2,(char *)"RTE",(char *)"g",
                      (char *)"mem_access: \\valid_read(p + __gen_e_acsl_at)",
                      26);
      __gen_e_acsl_at_2 = *(p + __gen_e_acsl_at);
    }
    A = 4;
  }
  /*@ assert \at(*(p + \at(*q,L1)),L2) ≡ 2; */
  __e_acsl_assert(__gen_e_acsl_at_2 == 2,(char *)"Assertion",(char *)"g",
                  (char *)"\\at(*(p + \\at(*q,L1)),L2) == 2",26);
  L3:
  /*@ assert \at(*(p + \at(*q,L1)),Here) ≡ 2; */
  {
    int __gen_e_acsl_valid_read_4;
    __gen_e_acsl_valid_read_4 = __e_acsl_valid_read((void *)(p + __gen_e_acsl_at_3),
                                                    sizeof(int),(void *)p,
                                                    (void *)(& p));
    __e_acsl_assert(__gen_e_acsl_valid_read_4,(char *)"RTE",(char *)"g",
                    (char *)"mem_access: \\valid_read(p + __gen_e_acsl_at_3)",
                    28);
    __e_acsl_assert(*(p + __gen_e_acsl_at_3) == 2,(char *)"Assertion",
                    (char *)"g",(char *)"\\at(*(p + \\at(*q,L1)),Here) == 2",
                    28);
  }
  __e_acsl_delete_block((void *)(& q));
  __e_acsl_delete_block((void *)(& p));
  return;
}

/*@ ensures \result ≡ \old(x); */
int __gen_e_acsl_h(int x);

int h(int x)
{
  __e_acsl_store_block((void *)(& x),(size_t)4);
  __e_acsl_delete_block((void *)(& x));
  return x;
}

int main(void)
{
  long __gen_e_acsl_at_3;
  long __gen_e_acsl_at_2;
  int __gen_e_acsl_at;
  int __retres;
  int x;
  int t[2];
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  __e_acsl_store_block((void *)(t),(size_t)8);
  __e_acsl_store_block((void *)(& x),(size_t)4);
  __e_acsl_full_init((void *)(& x));
  x = __gen_e_acsl_h(0);
  L:
  /*@ assert x ≡ 0; */
  {
    __gen_e_acsl_at_3 = (long)x;
    __gen_e_acsl_at_2 = x + 1L;
    __gen_e_acsl_at = x;
    __e_acsl_assert(x == 0,(char *)"Assertion",(char *)"main",
                    (char *)"x == 0",43);
  }
  __e_acsl_full_init((void *)(& x));
  x = 1;
  __e_acsl_full_init((void *)(& x));
  x = 2;
  __gen_e_acsl_f();
  /*@ assert \at(x,L) ≡ 0; */
  __e_acsl_assert(__gen_e_acsl_at == 0,(char *)"Assertion",(char *)"main",
                  (char *)"\\at(x,L) == 0",48);
  /*@ assert \at(x + 1,L) ≡ 1; */
  __e_acsl_assert(__gen_e_acsl_at_2 == 1L,(char *)"Assertion",(char *)"main",
                  (char *)"\\at(x + 1,L) == 1",49);
  /*@ assert \at(x,L) + 1 ≡ 1; */
  __e_acsl_assert(__gen_e_acsl_at_3 + 1L == 1L,(char *)"Assertion",
                  (char *)"main",(char *)"\\at(x,L) + 1 == 1",50);
  g(t,& x);
  __retres = 0;
  __e_acsl_delete_block((void *)(t));
  __e_acsl_delete_block((void *)(& x));
  __e_acsl_memory_clean();
  return __retres;
}

/*@ ensures \result ≡ \old(x); */
int __gen_e_acsl_h(int x)
{
  int __gen_e_acsl_at;
  int __retres;
  __e_acsl_store_block((void *)(& __retres),(size_t)4);
  __gen_e_acsl_at = x;
  __e_acsl_store_block((void *)(& x),(size_t)4);
  __retres = h(x);
  __e_acsl_assert(__retres == __gen_e_acsl_at,(char *)"Postcondition",
                  (char *)"h",(char *)"\\result == \\old(x)",35);
  __e_acsl_delete_block((void *)(& x));
  __e_acsl_delete_block((void *)(& __retres));
  return __retres;
}

/*@ ensures \at(A,Post) ≡ 3; */
void __gen_e_acsl_f(void)
{
  int __gen_e_acsl_at;
  f();
  __gen_e_acsl_at = A;
  __e_acsl_assert(__gen_e_acsl_at == 3,(char *)"Postcondition",(char *)"f",
                  (char *)"\\at(A,Post) == 3",7);
  return;
}


