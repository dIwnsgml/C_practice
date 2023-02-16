#include <stdio.h>
#include <limits.h>

void main(){
  short int x = -12345;
  unsigned short ux = (unsigned short) x;
  printf("%d %d\n", x, ux);

  /* UMAX32 = 4294967295 = -1 in two's complement form*/
  unsigned u = 4294967295;
  int tu = (int) u;
  printf("%u %d\n", u, tu);
}