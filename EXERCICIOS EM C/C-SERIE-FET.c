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
    //printf("[1] %d \n[2] %d\n", tPreAnt, tAnt);
    printf("(1) %d, (2) %d,",tPreAnt, tAnt);
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
        i++;
        if(i <= qtT){
            printf(" (%d) %d,", i-1, tAnt);
        }else{
            printf(" (%d) %d...\n",i-1, tAnt);
        }
        
        
    }
    


    

    return 0;
}