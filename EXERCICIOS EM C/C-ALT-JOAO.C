#include<stdlib.h>
#include<stdio.h>
int main(){
    double Joao, Chico;
    int anos;

    Joao = 0.90; // altura Joao
    Chico = 0.6; // altura Chico

    anos = 0;
    while (Chico <= Joao)
    {
        Joao+=0.01;
        Chico+=0.02;
        anos++;
        printf("\n ANO :%d\n Altura Atual de Joao: %.2f de de Chico %.2f",anos, Joao, Chico);
        
    }

    printf("\n\nChico levara %d anos para superar a altura de Joao.", anos);
    

}