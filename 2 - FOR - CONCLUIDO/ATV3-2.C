#include<stdio.h>
int main(){
    int n=0,i;
    float s=0; 

    while (n<=0)
    {
        printf("Digite um valor inteiro positivo: ");
        scanf("%d", &n);
    }
    
    for (i = 1; i <= n; i++)
    {
        //s = s + (1/i);
        s += (1.0/i);
    }

    printf("%.2f", s);
    
    
    return 0;
}