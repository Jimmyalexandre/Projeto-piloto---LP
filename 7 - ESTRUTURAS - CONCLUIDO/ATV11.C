#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<time.h>
//#include<math.h>
#define TAM 2

typedef struct  Data{
    int dia;
    int mes;
    int ano;
} TData;
typedef struct  Pais{
    char nome[100];
    TData nascimento;    
    
} TPais;
typedef struct  Pessoa{
    char nome[100];
    TData nascimento;
    TPais Pai;
    TPais Mae;    
    
} TPessoa;

int main(){
    TPessoa Pessoas[TAM];
    int i;
    for (i = 0; i < TAM ;i++)
    {
        printf("Nome: ");
        gets(Pessoas[i].nome);
        fflush(stdin);

        printf("Data de Nascimento: ");
        scanf("%d%d%d", &Pessoas[i].nascimento.dia, &Pessoas[i].nascimento.mes, &Pessoas[i].nascimento.ano);
        fflush(stdin);

        printf("Nome do Pai: ");
        gets(Pessoas[i].Pai.nome);
        fflush(stdin);
        printf("Data de Nascimento do Pai: ");
        scanf("%d%d%d", &Pessoas[i].Pai.nascimento.dia, &Pessoas[i].Pai.nascimento.mes, &Pessoas[i].Pai.nascimento.ano);
        fflush(stdin);

        printf("Nome do Mae: ");
        gets(Pessoas[i].Mae.nome);
        fflush(stdin);
        printf("Data de Nascimento da Mae: ");
        scanf("%d%d%d", &Pessoas[i].Mae.nascimento.dia, &Pessoas[i].Mae.nascimento.mes, &Pessoas[i].Mae.nascimento.ano);
        fflush(stdin);

        printf("\n*********************************************\n");
        printf("Nome: %s",Pessoas[i].nome);
        printf("\nData de Nascimento: %.2d/%.2d/%d", Pessoas[i].nascimento.dia, Pessoas[i].nascimento.mes, Pessoas[i].nascimento.ano);

        printf("\nNome do Pai: %s", Pessoas[i].Pai.nome);
        printf("\nData de Nascimento do Pai: %.2d/%.2d/%d", Pessoas[i].Pai.nascimento.dia, Pessoas[i].Pai.nascimento.mes, Pessoas[i].Pai.nascimento.ano);

        printf("\nNome da Mae: %s ", Pessoas[i].Mae.nome);
        printf("\nData de Nascimento da Mae: %.2d/%.2d/%d", Pessoas[i].Mae.nascimento.dia, Pessoas[i].Mae.nascimento.mes, Pessoas[i].Mae.nascimento.ano);
        printf("\n*********************************************\n");
    }
    

}