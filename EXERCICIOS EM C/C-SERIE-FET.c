#include <stdio.h>

int main(){
    int qtT=0, tAnt, tPreAnt, tAtual, i;

    while (qtT < 3)
    {
        printf("Digite a quantidade de termos da serie: ");
        scanf("%d", &qtT);

    }
    printf("Digite os valores dos dois termos: ");
    scanf("%d%d", &tPreAnt, &tAnt);
    i = 3;
    while (i <= qtT)
    {
        if(i%2==0){
            tAtual = tAnt-tPreAnt;
            
        }else{
            tAtual = tAnt+tPreAnt;
            

        }
        //printf("\n\n 1-[%d] %d %d %d ", i, tPreAnt, tAnt, tAtual);
        tPreAnt = tAnt;
        tAnt = tAtual;
        printf("\n[%d] %d %d ", i, tPreAnt, tAnt);
        i++;
    }
    


    

    return 0;
}