#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("%d e um numero par", numero);
    }
    else
    {
        printf("%d e um numero impar", numero);
    }

    return 0;
}
