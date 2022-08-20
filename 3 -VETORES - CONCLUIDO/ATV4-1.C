#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N  20
int main(){
    int vet[N], i;

    srand(time(NULL));
    
    for(i = 0; i < N; i++){
        //printf("Digite o valorda posicao[%d]: ", i);
        //scanf("%d", &vet[i]);

        vet[i]= 1 + rand()%10;
    }

    for ( i = 0; i < N; i++)
    {
        printf("Valor da posicao [%d] e: [%d]\n",i, vet[i]);
    }
    
    
    return 0;
}