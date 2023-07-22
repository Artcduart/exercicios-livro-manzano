// Velocidade de um projétil
#include <stdio.h>
#include <math.h>

int main() {
    
    float velocidade, distancia, tempo;

    printf("Digite a distancia percorrida pelo projetil em quilometros: ");
    scanf("%f", &distancia);
    
    printf("Digite o tempo gasto em minutos para percorrer essa distancia: ");
    scanf("%f", &tempo);
    
    velocidade = (distancia * 1000) / (tempo * 60);
    
    printf("A velocidade do projetil e de %f m/s", velocidade);
    
    return 0;
}