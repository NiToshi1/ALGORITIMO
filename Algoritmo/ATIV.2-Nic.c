#include <stdio.h>

int main (){

int num1, num2;

printf("Informe o primeiro número");
scanf("%d", &num1);

printf("Informe o segundo número");
scanf("%d", &num2);

if (num1%2 == 0 && num2%2 == 0){
    printf("Os números são pares");

}else (num1%2 != 0 && num2%2 != 0 ){
    printf("Os número são ímpares");

}else if (num1%2 == 0 && num2%2 != 0 ){
    printf("O primeiro número é par e o segundo impar");

}else (num1%2 == 0 && num2%2 != 0 ){
    printf("O primeiro número é ímpar e o segundo é par");
}
}