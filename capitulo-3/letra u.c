// Volume de uma esfera
#include <stdio.h>
#include <math.h>

int main() {
    
    float volume, raio;

    printf("Digite o valor do raio da esfera em centimetros: ");
    scanf("%f", &raio);
    
    volume = (4/3) * 3.14159 * pow(raio,3);
    
    printf("O volume de uma esfera de raio %.2f e de %.2f centimetros cubicos", raio, volume);
    
    return 0;
}