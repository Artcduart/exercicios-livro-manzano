#include <stdio.h>

int main()
{
    int valor, resultado;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    resultado = valor * 2;

    if (resultado > 30)
    {
        printf("%d", resultado);
    }
    else
        printf("O resultado da multiplicacao do numero por 2 e menor que 30");
}