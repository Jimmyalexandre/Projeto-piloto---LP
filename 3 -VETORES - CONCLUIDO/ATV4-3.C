#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  5
int main(){
    int i, divisor, soma, soma_geral;
    int v[N];

    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        v[i]= rand()%11;
        printf("Valor da posicao [%d] e: %d\n",i, v[i]);
    }
    
    soma_geral=0;
    printf("\n");
    for(i = 0; i < N; i++){
        soma=0;

        if(v[i]==1){
            soma = 1;
        }

        for (divisor = 1; divisor < v[i] ; divisor++)
        {
            if((v[i]%divisor)==0){
                soma += divisor;
            }
        }
        soma_geral+=soma;
        printf("somatorio de divisores da posicao  [%d] e: %d\n",i, soma);
    }
    printf("\nSoma geral dos divisores e: %d\n\n", soma_geral);


    return 0;
}