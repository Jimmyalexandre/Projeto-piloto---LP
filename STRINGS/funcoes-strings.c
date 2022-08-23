#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 20
int main(){
     char str1[TAM], str2[TAM], str3[TAM*2];

    printf("Digite duas STRINGS: ");
    gets(str1);
    fflush(stdin);
    gets(str2);
    fflush(stdin);

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    

    if(strcmp(str1,str2) < 0){
        strcpy(str3, str1);
        strcat(str3, " ");
        strcat(str3, str2);

        //printf("As 2 STRINGS NAO sao iguais. str1 vem antes.");
    }else if(strcmp(str1,str2) > 0){
        strcpy(str3, str2);
        strcat(str3, " ");
        strcat(str3, str1);

        //printf("As 2 STRINGS NAO sao iguais. str2 vem antes.");
    }else{
        strcpy(str3, str2); 
    }

        printf("\nSTRINGS CONCATENADAS: ");
        printf("%s", str3);


    //printf("Strings lidas: ");
    //printf("%s %s", str1, str2);

    return 0;


}