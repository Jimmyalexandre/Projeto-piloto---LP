#include<stdio.h>
int fatorial(int x);
int comb(int p1, int p2, int p3);
int main(){

    int n, p, combinacao;
    printf("Digite dois Valores: ");
    scanf("%d%d", &n, &p);
    combinacao = comb(n, p, n-p);
    printf("%d\n", combinacao);
    return 0;
}

int fatorial(int x){
    int fat, i;
    fat = 1; 
        for (i = 1; i <= x; i++){
        fat = fat*i;
    }
    return fat;
}

int comb(int p1, int p2, int p3){
    int fat1, fat2, fat3, c;
    fat1 = fatorial(p1);
    fat2 = fatorial(p2);
    fat3 = fatorial(p3);
    c = fat1 / (fat2*fat3);
    return c;
}