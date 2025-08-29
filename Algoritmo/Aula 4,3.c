#include <stdio.h>

int main(){

    int numero;

    printf("===Conversor de numero inteiro para dia da semana===/n");
    printf("Digite um número inteiro de 1 à 7: ");
    scanf("%d", &numero);

    // usar switch-case para determinar o dia da semana
    switch(numero) {
        case 1:
            printf("Dia da semana: Domingo\n");
            printf("Tipo:Final de semana\n");
            printf("Característica: Dia de descanso e lazer 🏖️\n");
            break;

        case 2:
            printf("Dia da semana: Segunda-feira\n");
            printf("Tipo: Primeiro dia no batente\n");
            printf("Característica: Dia difícil, chato pra caralho😿");
            break;

        case 3: 
            printf("Dia da semana: Terça-feira\n");
            printf("Tipo: Dia útil\n");
            printf("Característica: Dia produtivo da semana\n");
            break;

        case 4: 
            printf("Dia da semana: Quarta-feira\n");
            printf("Tipo: dia útil\n");
            printf("Característica: Meio da semana\n");
            break;
        case 5:
            printf("dia da semana: Quinta-feira\n");
            printf("Tipo: Dia útil\n");
            printf("Característica: Penúltimo dia útil\n");
            break;




}
}
