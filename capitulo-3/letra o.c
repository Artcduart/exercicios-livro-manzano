// Multiplicação e soma entre valores dada determinada ordem
#include <stdio.h>

int main() {
    
    int A, B, C, D, P, S;

    printf("Digite um valor inteiro para a variavel A: ");
    scanf("%d", &A);
    
    printf("Digite um valor inteiro para a variavel B: ");
    scanf("%d", &B);
    
    printf("Digite um valor inteiro para a variavel C: ");
    scanf("%d", &C);
    
    printf("Digite um valor inteiro para a variavel D: ");
    scanf("%d", &D);
    
    P = A * C;
    S = B + D;
    
    printf("O produto entre %d e %d e igual a %d \nA soma entre %d e %d e igual a: %d", A, C, P, B, D, S);
    
    return 0;
}