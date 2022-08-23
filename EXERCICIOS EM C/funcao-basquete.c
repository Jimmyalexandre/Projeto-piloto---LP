#include<stdio.h>
#include<math.h>
int pontos(int LV, int B2, int B3);
int main(){
    int bola3=-1, lance_livre=-1, bola2=-1, i;

    for (i = 0; lance_livre < 0; i++)
    {
        printf("Digite a QTD de lances livres: ");
        scanf("%d", &lance_livre);
    }
        for (i = 0; bola2 < 0; i++)
    {
        printf("Digite a QTD de Bolas de 2 Pontos: ");
        scanf("%d", &bola2);
    }
        for (i = 0; bola3 < 0; i++)
    {
        printf("Digite a QTD de Bolas de 3 Pontos: ");
        scanf("%d", &bola3);
    }
    
    printf("\n\nTotal de Pontos do Time A eh = %d\n", pontos(lance_livre, bola2, bola3));
    

    return 0;
}

int pontos(int LV, int B2, int B3){
    return LV + B2*2 + B3*3;
}