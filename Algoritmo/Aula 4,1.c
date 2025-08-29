#include <stdio.h>

int main(){

int num1, num2, num3;

printf ("Informe o primeiro número para colocarmos em ordem crescente: ");
scanf ("%d", &num1);

printf ("Informe o segundo número para colocarmos em ordem crescente: ");
scanf ("%d", &num2);

printf ("Informe o terceiro número para colocarmos em ordem crescente: ");
scanf ("%d", &num3);

if (num1 > num2 && num2 > num3){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num3, num2, num1);
}else if(num1 < num2 && num2 < num3){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num1, num2, num3);
}else if(num2 > num3 && num3 > num1){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num2, num3, num1);
}else if(num3 > num1 && num1> num2){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num3, num1, num2);
}else if(num1 > num3 && num3 > num2){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num1, num3, num2);
}else if(num2 > num1 && num1 > num3){
    printf ("Em ordem crescente, os números apresentados ficaram assim: %d, %d e %d", num2, num1, num3);
}

return 0;
}