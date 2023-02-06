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

void bitwise_complement(int x){
  printf("%d\n", ~x);
}

void right_shift(int x){
  printf("%d\n", x>>1);
  //shift 1 bit to the right
}

void left_shift(int x) {
  printf("%d\n", x<<1);
  //shift 1 bit to the left
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
  bitwise_complement(12);
  /*  Decimal         Binary           2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)

  Note: Overflow is ignored while computing 2's complement. */

  right_shift(12);
  /* 12 in binary =  00001100
  12>>1 = 00000110(6)
  */
  left_shift(12);
  /* 12 in binary =  00001100
  12<<1 = 00011000(24)
  */
}