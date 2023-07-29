#include <stdio.h>

int main()
{
    int valor_1, valor_2, valor_3, resultado;

    printf("Digite um valor: ");
    scanf("%d", &valor_1);

    printf("\nDigite outro valor: ");
    scanf("%d", &valor_2);

    printf("\nDigite outro valor: ");
    scanf("%d", &valor_3);

    resultado = valor_1 + valor_2 + valor_3;

    if (resultado >= 100)
    {
        printf("%d", resultado);
    }
    else
        printf("O resultado da soma dos tres valores e menor do que 100");
}