#include<stdio.h>
int main (){

    char op, voto;
    int ttC1=0, ttC2=0, ttC3=0, ttBranco=0, ttNulo=0;

    do{
        printf("- 1) P/ Candidato (A)    \n");
        printf("- 2) P/ Candidato (B)    \n");
        printf("- 3) P/ Candidato (C)    \n");
        printf("- 4) P/ voto em BRANCO   \n");
        printf("- 0) P/ ANULAR SEU VOTO  \n");
        scanf("%d", &voto);
        fflush(stdin);

        switch (voto){
            case 1: ttC1++; break;
            case 2: ttC2++; break;
            case 3: ttC3++; break;
            case 4: ttBranco++ ;break;
            case 5: ttNulo++ ;break;
        default: printf("**** Voce escolheu uma opcao invalida!!! ****"); break;
        }

        printf("\nVoce deseja continuar ? (sS) ou (nN): ");
        scanf("%c", &op);
        fflush(stdin);

    }while(op=='s'|| op== 'S');

    printf("******* Relatorio de votacao  ******\n");
    printf("***** canditado [A] votos : %d *****\n", ttC1 );
    printf("***** canditado [B] votos : %d *****\n", ttC2 );
    printf("***** canditado [C] votos : %d *****\n", ttC3);
    printf("***** Brancos:______________%d *****\n", ttBranco);
    printf("***** Nulos:________________%d *****\n", ttNulo);

    if((ttC1>ttC2)&&(ttC1>ttC3)){
        printf("Candidato (A) FOI O VENCEDOR !");
    }else if((ttC2>ttC1)&&(ttC2>ttC3)){
        printf("Candidato (B) FOI O VENCEDOR !");
    }else if((ttC3>ttC2)&&(ttC3>ttC1)){
        printf("Candidato (C) FOI O VENCEDOR !");
    }else{
        
        printf("Houve EMPATE!!!");
    }  
    
    return 0;
}