#include <stdio.h>

//Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

int soma = 0;

int main(){

    for(int i = 1; i <= 100; i++){

        soma = soma + i;
    }

    printf("A soma é %d.", soma);
}