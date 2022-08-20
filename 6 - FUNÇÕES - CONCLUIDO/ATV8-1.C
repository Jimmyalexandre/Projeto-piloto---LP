#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  5

//void vetpot(float vet[], float pot );
//void vetpot1(float vet[N], float pot );
void vetpot2(float *vet, float pot );
int main(){
    float v[N], potencia;
    int i;

    srand(time(NULL));

    printf("Digite a potencia: ");
    scanf("%f", &potencia);
    
    
    //Percorre o vetor decrementando i (i--)
    //for(i = N; i >=0; i--)

    //Percorre o vetor incrementando i (i++)
    for(i = 0; i < N; i++){
        v[i]= rand()%11;
        printf("Valor da posicao [%d] e: %.2f\n",i, v[i]);
    }

    vetpot2(v, potencia);
    
    printf("\n\n");
    for ( i = 0; i < N; i++)
    {
        printf("Valor da posicao [%d] e: %.2f\n",i, v[i]);
    }

    return 0;
}

void vetpot(float vet[], float pot ){
    int i;
        for (i = 0; i < N; i++){
        vet[i]= pow(vet[i], pot);
    }

}

void vetpot1(float vet[N], float pot ){
    int i;
        for (i = 0; i < N; i++){
        vet[i]= pow(vet[i], pot);
    }

}

void vetpot2(float *vet, float pot ){
    int i;
        for (i = 0; i < N; i++){
        vet[i]= pow(vet[i], pot);
    }

}