#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0)
    {
        raiz1 = (-b + sqrtf(delta)) / (2 * a);
        raiz2 = (-b - sqrtf(delta)) / (2 * a);
        printf("O valor das duas raizes reais sao: x1 = %.2f,  x2 = %.2f", raiz1, raiz2);
    }
    else if (delta == 0)
    {
        raiz1 = (-b + sqrtf(delta)) / (2 * a);
        printf("O valor da unica raiz e: x1 = %.2f", raiz1);
    }
    else
    {
        printf("Nao ha raiz real");
    }

    return 0;
}