#include<stdio.h>
void menu();

int main(){
    int op=0;
    while (op != 5)
    {
        menu();
        scanf("%d", &op);
    }
    return 0;
    
}

void menu(){
    printf("\n***** Escolha uma opcao: ******\n");
    printf(" (1)Somar \n");
    printf(" (2) Subtrair \n");
    printf(" (3) Dividir \n");
    printf(" (4) Multiplicar \n");
    printf(" (5) Sair \n\n");
}