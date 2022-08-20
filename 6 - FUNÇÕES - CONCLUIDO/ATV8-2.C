#include<stdio.h>
#include<stdlib.h>
//#include<time.h>
//#include<math.h>
#define N  50

void invert(char *str);
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

    printf("\nString invertida:\n");

    invert(nome);

    return 0;
}

void invert(char *str){
    int i, tam=0;
        for (i = 0; str[i] != '\0'; i++)
    {
         tam++;      
    }
        for (i = tam-1; i >=0 ; i--)
    {
        printf("%c-", str[i]);
    }

}