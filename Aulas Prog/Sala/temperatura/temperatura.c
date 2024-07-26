#include <stdio.h> 

int main()
{
    float fahrenheit, kelvin, celsius;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    kelvin = celsius + 273.15;
    fahrenheit = (9 * celsius / 5) + 32;
    
    printf("Temperatura em Kelvin: %.2f\n", kelvin);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}