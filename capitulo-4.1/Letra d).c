#include <stdio.h>

int main()
{

    float nota_1, nota_2, nota_3, nota_4, nota_5, media, media_2;

    printf("Digite a nota 1: ");
    scanf("%f", &nota_1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota_2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota_3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota_4);

    media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    if (media >= 7)
    {
        printf("Aluno aprovado. Media: %.1f", media);
    }
    else
    {
        printf("Digite a quinta nota: ");
    }
    scanf("%f", &nota_5);

    media_2 = (media + nota_5) / 2;

    if (media_2 >= 5)
    {
        printf("Aluno aprovado. Media final: %.1f", media_2);
    }
    else
    {
        printf("Aluno reprovado. Media final: %.1f", media_2);
    }

    return 0;
}