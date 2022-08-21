#include<stdio.h>
#include<math.h>
int main(){

    double nt1 =-1, nt2=-1, media;

    while (nt1 < 0 || nt2 < 0 || nt1 > 10 || nt2 > 10)
    {
        printf("Digite as duas notas: ");
        scanf("%lf%lf", &nt1,&nt2);
    }
    

    media = (nt1+nt2)/2.0;

    if(media < 4.0){
        printf("\nMedia eh %.4lf e o aluno esta REPROVADO.\n", media);
    }else if(media < 7.0){
        printf("\nMedia eh %.4lf e o aluno esta em exame.\n", media);
    }else{
        printf("\nMedia eh %.4lf e o aluno esta APROVADO.\n", media);
    }

    //printf("Valor da media das notas e :%4lf", media);
    return 0;

}