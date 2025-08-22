#include <stdio.h>

int main() 
{
    float n1, n2, soma;
    printf("Fale o primeiro número da soma:");
    scanf("%f", &n1);

    printf("Fale o segundo número da soma:");
    scanf("%f", &n2);
    soma = n1 + n2;
    printf("A soma dos dois algorítmos é:%f soma ", soma);    
    return 0;
}