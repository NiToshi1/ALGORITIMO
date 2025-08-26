#include <stdio.h>

int main(){

float largura, altura, area;

printf ("Informe a largura da área: ");
scanf ("%f", &largura);

printf ("informe a altura da área: ");
scanf ("%f", &altura);

area = (largura * altura); 

printf("A área de um retângulo é: %.2f", area);


return 0;
}