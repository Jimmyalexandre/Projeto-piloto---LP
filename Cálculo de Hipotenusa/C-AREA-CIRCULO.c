#include<stdio.h>
#include<math.h>
int main(){

    double raio = -1, area;

    while (raio <=0)
    {
        printf("Digite o RAIO do Circulo: ");
        scanf("%lf", &raio);
    }
    
    //usando contante para PI (M_PI) da lib "math.h"
    area = M_PI *(pow(raio,2.0));

    printf("Valor da area do circulo eh:%4lf", area);
    return 0;

}