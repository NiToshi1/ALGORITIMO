#include <stdio.h>

int main(){

float celsius, fahrenheit;
    
printf ("Informe celsius para ser transformado em fahrenheit: ");
scanf ("%f", &celsius, &fahrenheit);

fahrenheit = (celsius * 9/5 + 32);

printf ("O valor de Celsius traduzido para fahrenheit é: %.2f", fahrenheit);
}
