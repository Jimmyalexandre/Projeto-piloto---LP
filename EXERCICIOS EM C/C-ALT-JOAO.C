#include<stdlib.h>
#include<stdio.h>
int main(){
    float Joao, Chico;
    int anos;

    Joao = 0.95; // altura Joao
    Chico = 0.6; // altura Chico

    anos = 0;
    while (Chico <= Joao)
    {
        Joao+=0.01;
        Chico+=0.02;
        printf("\nAltura Atual de Joao: %.2f", Joao);
        printf("\nAltura Atual de Chico: %.2f", Chico);
        anos++;
    }

    printf("Chico levara %d anos para superar a altura de Joao.", anos);
    

}