#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  10
int main(){
    int i, potencia;
    int v[N];

    srand(time(NULL));
    printf("Digite a potencia: ");
    scanf("%d", &potencia);
    
    
    //Percorre o vetor decrementando i (i--)
    //for(i = N; i >=0; i--)

    //Percorre o vetor incrementando i (i++)
    for(i = 0; i < N; i++){
        v[i]= rand()%101;
        printf("Valor da posicao [%d] e: %d\n",i, v[i]);
    }

    for (i = 0; i < N; i++)
    {
        v[i]= pow(v[i], potencia);
    }
    
    printf("\n");
    for ( i = 0; i < N; i++)
    {
        printf("Valor da posicao [%d] e: %d\n",i, v[i]);
    }

    return 0;
}