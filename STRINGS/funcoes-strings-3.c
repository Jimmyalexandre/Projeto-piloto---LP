#include<stdio.h>
#include<strings.h>

#define TAM 20
#define QTD 10

int main(){
    char lista[QTD][TAM];
    int i, j, k;

    for (i = 0; i < (QTD/2); i++)
    {
        printf("Digite a String [%d]: \n", i+1);
        gets(lista[i]);
        fflush(stdin);
        for (k=0, j = strlen(lista[i])-1; j >=0 ; j--, k++){
            lista[i+5][k] = lista[i][j];
        }
        lista[i+5][k]='\0';
    }

    for (i = 0; i < (QTD/2); i++)
    {
        printf("String DIGITADA  : %s\n", lista[i]);
        printf("String INVERTIDA : %s\n\n", lista[i+5]);

    }
    
    

}