#include<stdio.h>
int main(){
    int ano = 0;

    while (ano <= 0)
    {
        printf("Digite o ano: ");
        scanf("%d", &ano);
    }
    

    if (ano % 4 == 0)
    {
        printf("Ano Bissexto.\n");
    }else{
        printf("Ano NAO Bissexto.\n");
    }
    
    return 0;
}