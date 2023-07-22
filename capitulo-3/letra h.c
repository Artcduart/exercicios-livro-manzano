// Cálculo do volume de uma caixa retangular
# include <stdio.h>
 
int main() {
 
int volume, comprimento, largura, altura;
 
printf("Digite o valor do comprimento da caixa em cm: ");
 scanf("%d", &comprimento);
 
printf("Digite o valor da altura da caixa em cm: ");
 scanf("%d", &altura);
 
printf("Digite o valor da largura da caixa em cm: ");
 scanf("%d", &largura);
 
   volume = comprimento * largura * altura;
 
printf("O volume da caixa e de %d centimetros cubicos", volume);
 
    return 0;
}