// Online C compiler to run C program online
#include <stdio.h>

int operacao(int a, int b);

int multi(int);

int main(void) {
  int a = 10;
  int b = 20;

  printf("\nResultado: b*b - a*a = %d", operacao(a,b));
  printf("\nMain: a: %d b: %d\n", a, b);
  return 0;
}

int operacao(int a, int b) {
  int resultado = multi(b) - multi(a);
  a = 0;
  b = 0;
  printf("\nOperacao a: %d b: %d", a, b);
  return resultado;
}

int multi(int a) {
  int resultado = a*a;
  a = 0;
  printf("\nMulti: a: %d\n", a);    
  return resultado;
}