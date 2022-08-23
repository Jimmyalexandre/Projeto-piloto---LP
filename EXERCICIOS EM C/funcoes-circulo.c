#include<stdio.h>
#include<math.h>
#include<conio.h>

double calc_raio(double RAIO);
double calc_circ(double CIRC);
void menu();
int main(){
    int op_menu;
    double  RAIO=-1;

    while (op_menu!=3)
    {
        menu();
        scanf("%d", &op_menu);


        if(op_menu == 1 || op_menu == 2){
            RAIO=-1;            
            while (RAIO <= 0)
            {
                printf("Digite o RAIO do Circulo: ");
                scanf("%lf", &RAIO);
            }
            switch (op_menu){
                case 1: while (RAIO <= 0){
                    printf("Digite o RAIO do Circulo: ");
                    scanf("%lf", &RAIO);
                }
                printf("O AREA do circulo com RAIO %.2f eh : %.2f\n", RAIO, calc_raio(RAIO)); getch();break;
                case 2: while (RAIO <=0 ){
                    printf("Digite o RAIO do Circulo: ");
                    scanf("%lf", &RAIO);
                }
                printf("O circunferencia do circulo com RAIO %.2f eh : %.2f\n", RAIO, calc_circ(RAIO)); getch();break;
            }        
        }else if(op_menu!=3){
        printf("Opcao Invalida !!!\n");
        }
    }
return 0;    
}

void menu(){
    system("cls");
    printf("\n\n*********  Escolha uma Opcao:  *********\n");
    printf("*1)- Calcular AREA do Circulo     ******\n");
    printf("*2)- Calcular circunferencia do Circulo*\n");
    printf("*3)- Sair                           ****\n");
    printf("****************************************\n");
}

double calc_raio(double R){
    return M_PI *(pow(R,2.0));
}
double calc_circ(double R){
    return  2*(M_PI*R);
}