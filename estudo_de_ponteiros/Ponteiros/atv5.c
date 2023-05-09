#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    float p = 3.14;
  
    *area = 4 * p * R * R;
    *volume = 4/3 * p * R * R * R;
}

int main () {
  float A, V;
  float r = 15;
    
  calc_esfera(r, &A, &V);

  printf("Area: %f\nVolume: %f", A, V);
  return 0;
}