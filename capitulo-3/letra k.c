// Conversor de dólar para real
#include <stdio.h>

int main() {
    
    float BRL, USD, cotacao;
    char cifrao1, cifrao2;
    
    printf("Digite o valor em dolar: ");
    scanf("%f", &USD);
    
    printf("Digite o valor da cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    
    BRL = USD * cotacao;
    cifrao1 = 'R';
    cifrao2 = '$';

    printf("O valor em reais e de %c%c%.2f", cifrao1, cifrao2, BRL);
    
    return 0;
}