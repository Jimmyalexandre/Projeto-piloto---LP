#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, EXIST=0;

    while (EXIST==0)
    {
        printf("\nDigite os 3 lados do triangulo: ");
        scanf("%d%d%d", &a, &b, &c);
        if ((a<=0)||(b<=0)||(c<=0))
        {
            printf("Os lados devem ser POSITIVOS.\n\n");
        }else if((a <= abs(b - c))||(a >= b+c)){
            printf("Nao satisfaz condicao de existencia.\n\n");
        }else if((b <= abs(a - c))||(b >= a+c)){
            printf("Nao satisfaz condicao de existencia.\n\n");
        }else if((c <= abs(b - a))||(c >= b+a)){
            printf("Nao satisfaz condicao de existencia.\n\n");
        }else{
            EXIST=1;
        }
        
    }

    if((a == b)&&(b == c)){
        printf("Triangulo equilatero\n");
    }else if((a != b) && (b != c) && (a != c)){
        printf("Triangulo escaleno\n");
    }else{
        printf("Triangulo Isoceles\n");
    }    
    return 0;
}