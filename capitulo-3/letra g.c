// Adições e multiplicações possíveis entre 4 valores
#include <stdio.h>

int main() {
 
int A,B,C,D,soma_AB,soma_AC,soma_AD,soma_BC,soma_BD,soma_CD,mult_AB,mult_AC,mult_AD,mult_BC,mult_BD,mult_CD;

printf("Digite um valor inteiro para a variavel A: ");
 scanf("%d", &A);
 
printf("Digite um valor inteiro para a variavel B: ");
 scanf("%d", &B);
 
printf("Digite um valor inteiro para a variavel C: ");
 scanf("%d", &C);
 
printf("Digite um valor inteiro para a variavel D: ");
 scanf("%d", &D);
 
      soma_AB = A + B;
      soma_AC = A + C;
      soma_AD = A + D;
      soma_BC = B + C;
      soma_BD = B + D;
      soma_CD = C + D;
      mult_AB = A * B;
      mult_AC = A * C;
      mult_AD = A * D;
      mult_BC = B * C;
      mult_BD = B * D;
      mult_CD = C * D;
 
printf("\nA + B = %d\n", soma_AB);
printf("A + C = %d\n", soma_AC); 
printf("A + D = %d\n", soma_AD); 
printf("B + C = %d\n", soma_BC); 
printf("B + D = %d\n", soma_BD); 
printf("C + D = %d\n", soma_CD);
printf("A * B = %d\n", mult_AB);
printf("A * C = %d\n", mult_AC); 
printf("A * D = %d\n", mult_AD); 
printf("B * C = %d\n", mult_BC);
printf("B * D = %d\n", mult_BD); 
printf("C * D = %d\n", mult_CD);

return 0;

}