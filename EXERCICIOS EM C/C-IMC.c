#include<stdio.h>
#include<math.h>

int main(){

    double altura=-1, peso=-1, imc;

    while (peso <= 0)
    {
        printf("Digite Peso: ");
        scanf("%lf", &peso);
    }
        while (altura <= 0)
    {
        printf("Digite Altura: ");
        scanf("%lf", &altura);
    }

    imc = peso/(pow(altura,2));

    printf("\n\nIMC = peso / (altura * altura)");
    printf("\n\nIMC calculado   Situacao");
    printf("\n******************************");
    printf("\nMenos de 20     Abaixo do peso");
    printf("\n20 <= IMC < 25  Peso Normal");
    printf("\n25 <= IMC < 30  Acima do peso");
    printf("\n30 <= IMC < 34  Obeso");
    printf("\nAcima de 34     Muito Obeso");
    printf("\n******************************");
    printf("\nIMC = %.2f", imc);
    if (imc < 20){
        printf(" (Abaixo do peso!).");
    }else if ((imc >= 20) && (imc < 25)){
        printf(" (Peso Normal)");
    }else if ((imc >= 25) && (imc < 30)){
        printf(" (Acima do peso).");
    }else if ((imc >= 30) && (imc < 34)){
        printf(" (Obeso).");
    }else{
        printf(" (Muito Obeso).");
    }

    printf("\n******************************");



    
}