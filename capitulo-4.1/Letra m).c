#include <stdio.h>

int main()
{
    char nome[41];
    char sexo;
    int validador;

    printf("Digite o seu nome:\n");
    fgets(nome, 41, stdin);

    printf("Digite seu sexo: (M) ou (F) \n");
    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M')
    {
        validador = 1;
    }
    else if (sexo == 'f' || sexo == 'F')
    {
        validador = 2;
    }
    else
    {
        validador = 3;
    }

    if (validador == 1)
    {
        printf("Ilmo. Sr. %s", nome);
    }
    else if (validador == 2)
    {
        printf("Ilma. Sra. %s", nome);
    }
    else
    {
        printf("Sexo informado inválido");
    }
}