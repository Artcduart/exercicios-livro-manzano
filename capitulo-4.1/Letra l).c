#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero nao maior que 3: ");
    scanf("%d", &numero);

    if (!(numero > 3))
    {
        printf("%d", numero);
    }

    return 0;
}