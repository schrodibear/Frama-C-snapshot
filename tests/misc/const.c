/* run.config
   GCC:
   OPT: -memory-footprint 1 -val -deps -out -input
   OPT: -memory-footprint 1 -val -deps -out -input -main semantique_const_1
   OPT: -memory-footprint 1 -val -deps -out -input -main semantique_const_2
   OPT: -memory-footprint 1 -val -deps -out -input -lib-entry -main semantique_const_1
   OPT: -memory-footprint 1 -val -deps -out -input -lib-entry -main semantique_const_2
*/
extern const int G;
extern int H;
extern int F;
extern const int I=2;

int G;
int H;

int X;

int main () {
  H++;
  I++;
  return G+F;
}

/** Comportement des analyses au sujet des variables "const" et "non const" :
 *
 * Les valeurs des variables "const" peuvent �voluer au cours de l'ex�cution
 * du code, comme pour toutes autres variables.
 *
 * Lors d'une analyse de type -lib-entry -main, les variables "const" ont pour
 * valeurs initiales, la valeur correspondant � leur expression d'initialisation.
 *
 * Les valeurs initiales des autres variables sont d'une valeur indertermin�e, mais
 * d�pendant de leur type.
 */
int cste const = 10 ; 
int var        = 3 ;

int input_value_of_cste, output_value_of_cste ;

void semantique_const_1 (void) {
  input_value_of_cste = cste ;
  
  cste = var ;
  
  output_value_of_cste = cste ;
  
}

void semantique_const_2 (void) {
  const int cste = 10 ;
  input_value_of_cste = cste ;
  
  cste = var ;
  
  output_value_of_cste = cste ;
}
