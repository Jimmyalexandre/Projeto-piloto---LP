#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int imprimeTab(int tab, int num_Max);
int main(){
            
    int n1, n2;

    printf("Digite a tabuada que quer calcular, e ate onde ela vai: ");
    scanf("%d %d", &n1, &n2 );

    imprimeTab(n1, n2);
}

int imprimeTab(int tab, int num_Max){
    int i;

    for (i = 1; i <= num_Max; i++)
    {
        printf("(%d) x (%d) = (%d)\n", tab, i, tab * i);
    }
}