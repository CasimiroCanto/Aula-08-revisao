// Online C compiler to run C program online
#include <stdio.h>

int operacao(int,int);

int multi(int);

int main(void) {
  int a = 10;
  int b = 20;

  printf("\nResultado: b*b - a*a = %d", operacao(a,b));
  printf("\nMain: a: %d b: %d\n", a, b);
  return 0;
}

int operacao(int x, int y) {
  int resultado = multi(y) - multi(x);
  x = 0;
  y = 0;
  printf("\nOperacao x: %d y: %d", x, y);
  return resultado;
}

int multi(int z) {
  int resultado = z*z;
  z = 0;
  printf("\nMulti: z: %d\n", z);    
  return resultado;
}
