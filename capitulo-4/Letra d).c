#include <stdio.h>
int main(){
int N1, N2, N3, N4, NE;
float MD1, MD2;
printf("Digite a primeira nota:");
scanf("%d", &N1);
printf("Digite a segunda nota:");
scanf("%d", &N2);
printf("Digite a terceira nota:");
scanf("%d", &N3);
printf("Digite a quarta nota:");
scanf("%d", &N4);
MD1 = (N1+N2+N3+N4)/4;
if(MD1 >= 7){
printf("Aprovado(a)!\n");
printf("Sua media e:%.2f", MD1);
}
else{
printf("Digite a quinta nota:");
scanf("%d", &NE);
MD2 = (N1+N2+N3+N4+NE)/5;
if(NE>=5){
printf("Aprovado(a)!\n");
}
else{
printf("Reprovado(a)!");
}
printf("Sua media e:%.2f", MD2);
}
}
