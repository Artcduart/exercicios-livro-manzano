// Quatro operações ente dois valores
#include <stdio.h>
#include <math.h>

int main() {
    
    float A, B, soma, subtracao, multiplicacao, divisao;

    printf("Digite um valor: ");
    scanf("%f", &A);
    
    printf("Digite outro valor: ");
    scanf("%f", &B);
    
    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;
    
    printf("\nA soma entre %.2f e %.2f e igual a %.2f",A, B,soma);
    printf("\nA subtracao entre %.2f e %.2f e igual a %.2f",A, B, subtracao);
    printf("\nO produto de %.2f e %.2f e igual a %.2f",A, B, multiplicacao);
    printf("\nO quociente da divisao de %.2f por %.2f e igual a %.2f",A, B, divisao);
    
    return 0;
}