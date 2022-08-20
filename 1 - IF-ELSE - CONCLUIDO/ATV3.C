#include<stdio.h>
int main(){
    int a, b, c, parar=0;
    char sair;
    printf("Digite os 3 lados do triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if((a == b)&&(b == c)){
        printf("Triangulo equilatero\n");
    }else if((a != b) && (b != c) && (a != c)){
        printf("Triangulo escaleno\n");
    }else{
        printf("Triangulo Isoceles\n");
    }
    
    do{
        printf("Pressione x para sair");
        scanf("%c", &sair);
        if((sair == 'x' )|| (sair == 'X'))
        {
            parar=1;
        }
        }while (parar == 0);
        
        
    return 0;
}