#include<stdio.h>
#include<locale.h>
#include<time.h>
#define N 3
#define CC 70
#define CD 3

int main(){


    int i,j, origem, dest, dest_Ant, perc;
    int dist[N][N];
    char cidade[N][CC], op='s';
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        printf("\nDigite a cidade (%d): ", i+1);
        gets(cidade[i]);
        puts(cidade[i]);

    }
    
    for (i = 0; i < N; i++)
    {
        //printf("\n");
        dist[i][i]=0;
        for (j = i+1; j < N; j++)
        {
            dist[i][j]= 10 + rand()%9990;
            dist[j][i] = dist[i][j];
        }
        
    }
    system("cls");
    for (i = 0; i < N; i++)
        {
            printf("%s (%d)  ", cidade[i], i+1);
        }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%s (%d)", cidade[i], i+1);
        for (j = 0; j < N; j++)
        {
            printf(" [%5d]", dist[i][j]);
        }
        printf("\n");
        
    }

    while (op=='s'|| op=='S')
    {
        printf("Digite o numero da cidade de Origem: ");
        scanf("%d", &origem);
        fflush(stdin);
        origem--;
        if(origem < 0 || origem >= N){
            printf("Cidigo de Cidade Inexistente!!!\n");
            fflush(stdin);
            continue;
        }

        dest = dest_Ant = -1;
        perc = 0;
        while (op=='s'|| op=='S')
        {
            printf("Digite o destino partindo da cidade de %s (%d): ",cidade[origem], origem+1);
            scanf("%d", &dest);
            dest--;
            if (dest < 0 || dest >= N || dest == origem)
            {
                printf("Codigo de Cidade (DESTINO) Inexistente!!!\n");
                fflush(stdin);
                continue;
            }
            perc += dist[origem][dest];
            printf("\nTecho: [%d] - percurso Total [%d]", dist[origem][dest], perc);
            fflush(stdin);       
            origem = dest;


            printf("Seseja continuar ? (S ou N): ");
            scanf("%c", &op);
            fflush(stdin);
        }

        while (op=='s'|| op=='S')
        {
            
        }
        
        

    }
    
    

    

}

void MENU(){

}


//void calc_dist(){

//}
