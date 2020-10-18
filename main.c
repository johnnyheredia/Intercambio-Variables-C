#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int X;
  int Y;
  int AUX;
  
  printf("Ingresa el valor de X: ");
  scanf("%i", &X);

  printf("Ingresa el valor de Y: ");
  scanf("%i", &Y);
  
  AUX = X;
  X = Y;
  Y = AUX;
  

  printf("Imprimo X: %i \n", X);
  printf("Imprimo Y: %i \n", Y);

  return 0;
}