#include "../kernel/types.h"
#include "user.h"

uint Binaring_mask(int mask) {
  uint result = 0, exponent = 1;
  while(mask > 0) {
    result += (mask % 2) * exponent;
    mask /= 2;
    exponent *= 10;
  }
  return result;
}

int main(int argc, char** argv) {
  printf("user trace\n"); 
  int mask_dec = atoi(argv[1]);
  uint mask_bin = Binaring_mask(mask_dec); 
  trace(mask_bin, argv + 2);
}
