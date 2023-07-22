// Conversor de real para dolar
#include <stdio.h>

int main() {
    
    float BRL, USD, cotacao;
    char cifrao;
    
    printf("Digite o valor em real: ");
    scanf("%f", &BRL);
    
    printf("Digite o valor da cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    
    USD = BRL / cotacao;
    cifrao = '$';

    printf("O valor em dolares e %c%.2f", cifrao, USD);
    
    return 0;
}