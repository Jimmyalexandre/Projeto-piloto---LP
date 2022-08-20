#include<stdio.h>
int main(){
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(ano <= 0){
        printf("Ano invalido.");
    }else if (ano % 4 == 0)
    {
        printf("Ano bissexto.\n");
    }else{
        printf("Ano NAO bissexto.\n");
    }
    
    return 0;
}