// Conversor Celsius -> Fahrenheit 
#include <stdio.h>

int main() {

    float Celsius, Fahrenheit;

    printf("\nDigite o Valor em Celsius: ");
    scanf("%f", &Celsius);
    
    Fahrenheit = (((Celsius * 9) / 5) + 32);

    printf("O valor em Fahrenheit e de %.2f graus", Fahrenheit);
    
    return 0;
}