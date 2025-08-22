#include <stdio.h>

int main(){

    int numero1;
    int numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero%2==2 && numero2%2==0){
        printf("O número %Dé par e o número %d também é par", numero1, numero2);
    }else if(numero1%2==0 || numero2%2==0){
        printf("Um dos dois nímero %d ou %d é par", numero1, numero2);
    }else{
        printf("Nenhum dos número digitados é par");
    }
return 0;
}