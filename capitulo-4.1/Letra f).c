#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);

    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    printf("Digite o terceiro valor: ");
    scanf("%d", &C);

    if (A > B && B > C)
    {
        printf("%d\n", A);
        printf("%d\n", B);
        printf("%d\n", C);
    }
    else if (B > A && A > C)
    {
        printf("%d\n", B);
        printf("%d\n", A);
        printf("%d\n", C);
    }
    else if (C > B && B > A)
    {
        printf("%d\n", C);
        printf("%d\n", B);
        printf("%d\n", A);
    }
    else if (C > A && A > B)
    {
        printf("%d\n", C);
        printf("%d\n", A);
        printf("%d\n", B);
    }
    else if (B > C && C > A)
    {
        printf("%d\n", B);
        printf("%d\n", C);
        printf("%d\n", A);
    }
    else if (A > C && C > B)
    {
        printf("%d\n", A);
        printf("%d\n", C);
        printf("%d\n", B);
    }

    return 0;
}