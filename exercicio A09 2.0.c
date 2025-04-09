#include <stdio.h>

int subtrai3(int num) {
    return num - 3;
}

int main() {
    int numero;
    
    printf("digite um numero: ");
    scanf("%d", &numero);
    
    printf("recebido: %d\n", numero);
    
    int resultado = subtrai3(numero);
    printf("resultado: %d\n", resultado);
    printf("atual: %d\n", numero);
    
    return 0;
}