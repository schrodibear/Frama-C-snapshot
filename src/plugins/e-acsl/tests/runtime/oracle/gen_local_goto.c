/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
char *__gen_e_acsl_literal_string;
char *__gen_e_acsl_literal_string_3;
char *__gen_e_acsl_literal_string_2;
char *__gen_e_acsl_literal_string_4;
void __e_acsl_globals_init(void)
{
  __gen_e_acsl_literal_string = "t is %d, going to %s\n";
  __e_acsl_store_block((void *)__gen_e_acsl_literal_string,
                       sizeof("t is %d, going to %s\n"));
  __e_acsl_full_init((void *)__gen_e_acsl_literal_string);
  __e_acsl_mark_readonly((void *)__gen_e_acsl_literal_string);
  __gen_e_acsl_literal_string_3 = "UP";
  __e_acsl_store_block((void *)__gen_e_acsl_literal_string_3,sizeof("UP"));
  __e_acsl_full_init((void *)__gen_e_acsl_literal_string_3);
  __e_acsl_mark_readonly((void *)__gen_e_acsl_literal_string_3);
  __gen_e_acsl_literal_string_2 = "RET";
  __e_acsl_store_block((void *)__gen_e_acsl_literal_string_2,sizeof("RET"));
  __e_acsl_full_init((void *)__gen_e_acsl_literal_string_2);
  __e_acsl_mark_readonly((void *)__gen_e_acsl_literal_string_2);
  __gen_e_acsl_literal_string_4 = "AGAIN";
  __e_acsl_store_block((void *)__gen_e_acsl_literal_string_4,sizeof("AGAIN"));
  __e_acsl_full_init((void *)__gen_e_acsl_literal_string_4);
  __e_acsl_mark_readonly((void *)__gen_e_acsl_literal_string_4);
  return;
}

int main(int argc, char const **argv)
{
  int __retres;
  __e_acsl_memory_init(& argc,(char ***)(& argv),(size_t)8);
  __e_acsl_globals_init();
  int t = 0;
  UP: ;
  if (t == 2) {
    __gen_e_acsl_printf_va_1(__gen_e_acsl_literal_string,t,
                             (char *)__gen_e_acsl_literal_string_2);
    goto RET;
  }
  AGAIN:
  {
    int a;
    __e_acsl_store_block((void *)(& a),(size_t)4);
    __e_acsl_full_init((void *)(& a));
    a = 1;
    /*@ assert \valid(&a); */
    {
      int __gen_e_acsl_valid;
      __gen_e_acsl_valid = __e_acsl_valid((void *)(& a),sizeof(int),
                                          (void *)(& a),(void *)0);
      __e_acsl_assert(__gen_e_acsl_valid,(char *)"Assertion",(char *)"main",
                      (char *)"\\valid(&a)",25);
    }
    if (t == 2) {
      __gen_e_acsl_printf_va_2(__gen_e_acsl_literal_string,t,
                               (char *)__gen_e_acsl_literal_string_3);
      __e_acsl_delete_block((void *)(& a));
      goto UP;
    }
    else t ++;
    int b = 15;
    __e_acsl_store_block((void *)(& b),(size_t)4);
    __e_acsl_full_init((void *)(& b));
    /*@ assert \valid(&b); */
    {
      int __gen_e_acsl_valid_2;
      __gen_e_acsl_valid_2 = __e_acsl_valid((void *)(& b),sizeof(int),
                                            (void *)(& b),(void *)0);
      __e_acsl_assert(__gen_e_acsl_valid_2,(char *)"Assertion",
                      (char *)"main",(char *)"\\valid(&b)",36);
    }
    __gen_e_acsl_printf_va_3(__gen_e_acsl_literal_string,t,
                             (char *)__gen_e_acsl_literal_string_4);
    __e_acsl_delete_block((void *)(& a));
    __e_acsl_delete_block((void *)(& b));
    goto AGAIN;
    __e_acsl_delete_block((void *)(& b));
    __e_acsl_delete_block((void *)(& a));
  }
  RET: __retres = 0;
  __e_acsl_memory_clean();
  return __retres;
}

