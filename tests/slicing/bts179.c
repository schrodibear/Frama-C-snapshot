/* run.config
 OPT: -slice-return main -slice-print
 OPT: -slice-pragma main -slice-print
 OPT: -sparecode-analysis
*/

struct {int a; int ab; int b; int c ; int d;} S;
int X, Y;
void g (void) {
  S.a = 1;
  S.ab = 0;
  S.b = 2; /* here, better can be done ! */
  S.d = 4;
}
int main (void) {
  g();
  //@  slice pragma expr S.b;
  S.ab = 1; /* so that S.ab is sparecode in g() */
  return S.a ;
}
