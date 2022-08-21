#include<stdio.h>
#include<math.h>
int main(){

    float consL=0, tanque=0, AutoCar;

    while (consL <=0 || tanque <= 0)
    {
        printf("Digite o consumo medio por Litro: ");
        scanf("%f", &consL);

        printf("Digite o Volume disponivel no tanque:");
        scanf("%f", &tanque);
    }

    AutoCar= tanque*consL;


    printf("A autonomia em KM do veiculo e de kM: %.2f", AutoCar);

    return 0;

}