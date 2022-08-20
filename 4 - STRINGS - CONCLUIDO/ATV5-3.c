#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  50

int main(){
    int i, tam = 0;
    char nome[N];

    printf("\nDigite um nome: ");
    gets(nome);
    puts(nome);

    for (i = 0; nome[i] != '\0'; i++)
    {
         tam++;      
    }

    printf("\nString invertida: ");
    for (i = tam-1; i >=0 ; i--)
    {
        printf("%c", nome[i]);
    }
    
    
 
    return 0;
}