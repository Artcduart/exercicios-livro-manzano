// Reajuste de salario
#include <stdio.h>
//#include <conio.h>

int main() {
    
    float SM, PR, NS;
    char cifrao1, cifrao2;

    printf("Digite o valor do salario mensal: ");
    scanf("%f", &SM);
    
    printf("Digite o valor do percentual de reajuste: ");
    scanf("%f", &PR);
    
    NS = ((PR/100) * SM) + SM;
    cifrao1 = 'R';
    cifrao2 = '$';
    
    printf("O valor do salario reajustado e igual a %c%c%.2f", cifrao1, cifrao2, NS);
    
    return 0;
}