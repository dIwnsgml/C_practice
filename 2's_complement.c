#include <stdio.h>

int *decimal_to_binary(int decimal){
  static int binary[64];
  int bit = 0;

  /* reset */
  for(bit = 0; bit < 64; bit++){
    binary[bit] = 0;
  }

  bit = 63;

  do{
    binary[bit] = decimal % 2;
    decimal /= 2;
    bit -= 1;
  } while(decimal >= 1);
  return binary;
}

int *binary_to_complement_1(int *binary){
  static int complement_1[64];

  for(int bit = 63; bit >= 0; bit--){
    if(binary[bit] == 0){
      complement_1[bit] = 1;
    } else {
      complement_1[bit] = 0;
    }
  }

  return complement_1;
}

int *complement_1_to_complement_2(int *complement_1){
  static int complement_2[64];
  int carried_bit = 1;
  for(int bit = 63; bit >= 0; bit --){
    complement_2[bit] = complement_1[bit];
  }
  for(int bit = 63; bit >= 0 ; bit--){
    if(complement_1[bit] + carried_bit == 1){
      complement_2[bit] = 1;
      carried_bit = 0;
      break;
    } else if(complement_1[bit] + carried_bit == 2){
      carried_bit = 1;
      complement_2[bit] = 0;
    }
  }
  return complement_2;
}

void main(){
  int decimal = 12;
  int *complement_1;
  int *complement_2;
  int bit = 0;

  /* scanf("%d", &decimal); */
  int *binary;
  binary = decimal_to_binary(decimal);
  complement_1 = binary_to_complement_1(binary);
  /* for(int i = 0; i < 64; i++){
    printf("%d", complement_1[i]);
  } */

  complement_2 = complement_1_to_complement_2(complement_1);
  for(int i = 0; i < 64; i++){
    printf("%d", complement_2[i]);
  }
}