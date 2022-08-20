#include<stdio.h>
int main(){
    int a=0, n=0, calc=1, i;

    while ((a<=0)||(n<=0))
    {
        printf("Digite os valores para (a) e (n), inteiros e positivos:\n");
        scanf("%d%d", &a,&n);
    }

    /*i=0;
    while (i < n){
        calc = calc*a;
        i++;
    }
    */
    /*
    i=0;
    do
    {
        calc = calc*a;
        i++;
    } while (i < n);
    */

    
    for (i = 0; i < n; i++){
        calc = calc*a;
    }
    
    printf("O resultado da potenciacao de (a) por (n) e: %d", calc);
    
    
    return 0;
}