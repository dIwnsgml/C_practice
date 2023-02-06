#include <stdio.h>

int decimal_binary(int decimal){
  int binary[64];
  int bit = 0;

  /* reset */
  for(bit = 0; bit < 64; bit++){
    binary[bit] = 0;
  }

  bit = 0;

  do{
    binary[bit] = decimal % 2;
    decimal /= 2;
    bit += 1;
  } while(decimal >= 1);

  for(bit = 0; bit < 64; bit++){
    printf("%d", binary[63 - bit]);
  }
}

void main(){
  decimal_binary(12);
}