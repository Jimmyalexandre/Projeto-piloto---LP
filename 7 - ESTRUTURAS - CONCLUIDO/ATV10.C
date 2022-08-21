#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define TAM 3

typedef struct  Data{
    int dia;
    int mes;
    int ano;
} Data;

void PreencheData(Data *pData);
void ImprimeData(Data pData);
Data CopiaData(Data pData);
int main(){

    srand(time(NULL));

    Data Nascimento[TAM], Admissao[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        //printf("Digite Dia, Mes e Ano\n");
        //scanf("%d%d%d", &Nascimento[i].dia, &Nascimento[i].mes, &Nascimento[i].ano);
        PreencheData(&Nascimento[i]);
        printf("Nascimento\n");
        ImprimeData(Nascimento[i]);

        printf("Admissao\n");
        Admissao[i] = CopiaData(Nascimento[i]);
        ImprimeData(Admissao[i]);
        printf("\n");
        
    }
    

    return 0;
}
// Passagem de Estrutura por Referência
void PreencheData(Data *pData){
    pData->dia = 1 + rand()%30;   
    pData->mes = 1 + rand()%12;
    pData->ano = 1920 + rand()%102;

}
// Passagem por Valor
void ImprimeData(Data pData){
printf("Data: %.2d/%.2d/%d\n", pData.dia, pData.mes, pData.ano);
}

//Retronando Estruturas
Data CopiaData(Data pData){
    
    Data Admis;

    Admis.dia = pData.dia;
    Admis.mes = pData.mes;
    Admis.ano = pData.ano;
    return Admis;
}