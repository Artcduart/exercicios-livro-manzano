#include <stdio.h>
#include <stdlib.h>

int main() {
    // declaração das variáveis
    int valor;
    char controle;

    // loop do-while para a repetição do programa
    do {
    // entrada do valor pelo usuário
    printf("Digite um valor negativo ou positivo: \n");
    scanf("%d", &valor);

    // processamento da variável valor. Se o valor for negativo, é multiplicado por -1.
    // Mas se o valor for positivo, apenas imprime o valor.
    if (valor < 0) {
        printf("\n%d", valor * (-1));
    } else {printf("\n%d", valor);}

    // Prompt final para repetição do programa
    printf("\n\nPara repetir o programa, digite (S)");
    scanf(" %c", &controle);
    // limpa o terminal
    system("cls");
   
    // condição do laço do-while. Enquanto o usuário estiver digitando "S" no final do programa,
    // o laço será executado.
    } while (controle == 's' || controle == 'S');
    
    return 0;
}
