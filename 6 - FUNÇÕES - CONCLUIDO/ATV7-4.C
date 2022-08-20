#include<stdio.h>
void troca (int *p1, int *p2);

int main(){
    int a, b;
    printf("Digite dois valores:\n");
    scanf("%d%d", &a, &b);
    troca(&a, &b);
    printf("Trocas %d %d\n", a, b);

    return 0;
}

void troca (int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}