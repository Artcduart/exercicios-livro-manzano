// Soma dos quadrados de três valores
#include <stdio.h>
#include <math.h>

int main() {
    
    int A, B, C, soma_quadrados;

    printf("Digite um valor inteiro para a variavel A: ");
    scanf("%d", &A);
    
    printf("Digite um valor inteiro para a variavel B: ");
    scanf("%d", &B);
    
    printf("Digite um valor inteiro para a variavel C: ");
    scanf("%d", &C);
    
    soma_quadrados = pow(A,2) + pow(B,2) + pow(C,2);
    
    printf("A soma %d^2 + %d^2 + %d^2 e igual a %d", A, B, C, soma_quadrados);
    
    return 0;
}