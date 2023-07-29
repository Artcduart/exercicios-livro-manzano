#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um valor entre 1 e 9: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 9)
    {
        printf("O valor esta dentro da faixa permitida");
    }
    else
    {
        printf("O valor esta fora da faixa permitida");
    }
    return 0;
}