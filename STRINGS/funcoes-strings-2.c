#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 20
int main(){
     char str1[TAM];

    do{        
		printf("Digite uma STRINGS: ");
        gets(str1);
        fflush(stdin);
		
		
		printf(" O tamanho da STRING EH: %d\n", strlen(str1));
    }while (strlen(str1) <= 5);
    return 0;
}