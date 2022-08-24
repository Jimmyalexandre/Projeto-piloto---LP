#include<stdio.h>
#include<locale.h>
#define L 3
#define CA 70
#define CN 4

void imp_notas(char PA[][CA], float PN[][CN+1]);
int main(){
    int i, j;
    setlocale(LC_ALL, "");
    char alunos[L][CA];
    float notas[L][CN+1]={0,0,0,0,0,};

    for (i = 0; i < L; i++)
    {
            system("cls");
            printf("\nDigite o Nome do Aluno: \n");
            gets(alunos[i]);
            fflush(stdin);
            //notas[i][CN]= 0;

        for (j = 0; j < CN; j++)
        {
                
            printf("\nInsira a nota do %dº Bimestre: \n", j+1);
            scanf("%f", &notas[i][j]);
            notas[i][CN] += notas[i][j];
            printf("\n%.2f", notas[i][CN]);
            fflush(stdin);
        }        
    }

    imp_notas(alunos, notas);

    return 0;
}

void imp_notas(char PA[][CA], float PN[][CN+1]){
    int i, j;
    system("cls");
    for (i = 0; i < L; i++)
    {
            printf("\n\nAluno: %s\n", PA[i]);
            printf("Notas: ");
            fflush(stdin);

        for (j = 0; j < CN; j++)
        {
            printf(" |%dºB-[%.2f]|", j+1, PN[i][j]);
            fflush(stdin);
        }
        //printf("\nSoma Total notas: %.2f\n",notas[i][CN]);

        printf("\nMedia Aritimética das notas: %.2f calc - (%.2f)/(%d)",PN[i][CN]/4, PN[i][CN], CN);
    }
}
