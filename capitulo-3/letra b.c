// Conversor Fahrenheit -> Celsius
#include <stdio.h>
 
int main() {

    float Celsius, Fahrenheit;
    printf("\nDigite o Valor em Fahrenheit: ");
    scanf("%f", &Fahrenheit);
    
    Celsius = (((Fahrenheit - 32) * 5) / 9);
    printf("O valor em Celsius e de %.2f graus", Celsius);
    
    return 0;
}