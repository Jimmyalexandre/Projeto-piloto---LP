#include<stdio.h>
int fatorial(int x);

int main(){
    int n, f;
    printf("Digite N fatorial: ");
    scanf("%d", &n);
    f = fatorial(n);

    printf("%d", f);
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