#include <stdio.h>

int main(){
float num1, num2, soma;

printf("Digite o valor um: ");
scanf("%f", &num1);

printf("Digite o valor dois: ");
scanf("%f", &num2); 


soma = (num1+num2);

if(soma >= 10){
    soma = soma + 5;
    printf("Pelo resultado dos números apresentados ser maior que 10, o valor é %f", soma);
}else{
    soma = soma - 7;
    printf("Pelo resultado dos números apresentados ser menor que 10, o valor é: %f", soma);
}

return 0;
}

