#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2

typedef struct Data{
    int dia;
    int mes;
    int ano;
} TData;

int main(){
    int numD, i;
    char op='s';
    TData *pNasc;
    pNasc = (TData*) malloc (sizeof(TData));
    while (1){

        printf("Digite Dia, Mes e Ano: ");
        scanf("%d%d%d", &pNasc[numD].dia, &pNasc[numD].mes, &pNasc[numD].ano);
        fflush(stdin);
        numD++;

        printf("Deseja continuar??? (S) para SIM  ou Qualquer outra tecla para NAO!!!:");
        scanf("%c", &op);
        fflush(stdin);

        printf("\n");
        if (op == 'S'|| op == 's'){
            pNasc = realloc(pNasc, (numD+1)*sizeof(TData));
        } else { 
            break;
        }
        
    }
       printf("Datas Digitadas: \n");
    for ( i = 0; i < numD; i++)
    {
        printf("%d - %d/%d/%d", i+1, pNasc[i].dia, pNasc[i].mes, pNasc[i].ano);
        printf("\n");
    }
    
    
    free(pNasc);
    return 0;  
}