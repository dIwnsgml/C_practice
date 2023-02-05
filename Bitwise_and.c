#include <stdio.h>

void bitwise_and(int x, int y) {
  printf("%d\n",x & y);
}

void bitwise_or(int x, int y) {
  printf("%d\n", x | y);
}

void bitwise_xor(int x, int y) {
  printf("%d\n", x ^ y);
}
void main(){
  bitwise_and(12, 25);
  /* 12 = 00001100 (In Binary)
  25 = 00011001 (In Binary)

  Bit Operation of 12 and 25
    00001100
  & 00011001
    ________
    00001000  = 8 (In decimal) */
  bitwise_or(12, 25);
  /* 12 = 00001100 (In Binary)
  25 = 00011001 (In Binary)

  Bitwise OR Operation of 12 and 25
    00001100
  | 00011001
    ________
    00011101  = 29 (In decimal) */
  bitwise_xor(12, 25);
  /* 12 = 00001100 (In Binary)
  25 = 00011001 (In Binary)

  Bitwise XOR Operation of 12 and 25
    00001100
  ^ 00011001
    ________
    00010101  = 21 (In decimal) */
}