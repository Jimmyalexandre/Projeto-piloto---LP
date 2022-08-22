#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define T 11
void MENU();
void HIPOTENUSA();
void CIRCULOAREA();
void AUTOTANQUE();
void DESCONTO();
void TABUADA();
void FETUCCINE();
void FATORIAL();
int main(){
    //TPessoa Pessoas[TAM];
    int op = -1;
    while (op!=0){
    	
    		MENU();
    		printf("Escolha Opcao: ");
    		scanf("%d", &op);
    		fflush(stdin);
    		
    		if (op == 1){
    			HIPOTENUSA();
    			getch();
			}else if (op == 2){
				TABUADA();
				getch();	
			}else if ( op == 3 ){
				FETUCCINE();
				getch();
			}else if (op == 4){
				FATORIAL();
				getch();
			}
            else if (op == 5){
				CIRCULOAREA();
				getch();
			}else if (op == 6){
				AUTOTANQUE();
				getch();
			}else if (op == 7){
				DESCONTO();
				getch();
			}else if (op != 0){
				printf("*****   OPCAO INVALIDA   *****\n");
				getch();
			}
	}
	return 0;   
}
void MENU(){

    system("cls");
    printf("_______________________________\n");
    printf("| 1)calc - Hipotenusa         |\n");
    printf("| 2)calc - Tabuada            |\n");
    printf("| 3)calc - Fettutini          |\n");
    printf("| 4)calc - Fatorial           |\n");
    printf("| 5)calc - Area circulo       |\n");
    printf("| 6)calc - Autonomia tanque   |\n");
    printf("| 7)calc - Desconto           |\n");
    printf("| 0)calc - SAIR               |\n");
    printf("-------------------------------\n");
}
void HIPOTENUSA(){
    
    double cat1 = 0, cat2 = 0, hip;

    while (cat1 <=0 || cat2 <= 0)
    {
        printf("Digite os dois catetos: ");
        scanf("%lf%lf", &cat1,&cat2);
    }
    
    hip = sqrt(pow(cat1, 2.0) + pow(cat2, 2.0));

    printf("Valor da Hipotenusa e :%4lf", hip);

}
void CIRCULOAREA(){
        double raio = -1, area;

    while (raio <=0)
    {
        printf("Digite o RAIO do Circulo: ");
        scanf("%lf", &raio);
    }
    
    //usando contante para PI (M_PI) da lib "math.h"
    area = M_PI *(pow(raio,2.0));

    printf("Valor da area do circulo eh:%4lf", area);
}
void AUTOTANQUE(){
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
}
void DESCONTO(){
    
    float preco_produto=0, desconto_produto=0, preco_calculado;

    while (preco_produto <= 0 )
    {
        printf("Digite o preco do produto: ");
        scanf("%f", &preco_produto);
    }
        while (desconto_produto <= 0 || desconto_produto >= 90)
    {
        printf("Digite o desconto do produto: ");
        scanf("%f", &desconto_produto);
    }
    
    preco_calculado = preco_produto-(desconto_produto/100)*preco_produto;
    
    printf("\n*******************Calculo desxonto produto*******************\n");
    printf("Valor produto                                   R$:%.2f\n", preco_produto);
    printf("Valor desconto                                  - %% %.2f\n", desconto_produto);
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("                                                      \n");
    printf("Total valor com desconto:                        R$:%.2f\n", preco_calculado);
    printf("\n*******************Calculo desconto produto*******************\n");

}
void TABUADA(){
    
    int i, numero;
    printf("Digite a tabuada que quer calcular: ");
    scanf("%d", &numero);
    for (i = 1; i < T; i++)
    {
        printf("(%d) x (%d) = (%d)\n", numero, i, numero * i);
    }
}
void FETUCCINE(){
        int qtT=0, tAnt, tPreAnt, tAtual, i;

    while (qtT < 3)
    {
        printf("Digite a quantidade de termos da serie: ");
        scanf("%d", &qtT);

    }
    printf("Digite os valores dos dois termos: ");
    scanf("%d%d", &tPreAnt, &tAnt);
    //printf("[1] %d \n[2] %d\n", tPreAnt, tAnt);
    printf("(1) %d, (2) %d,",tPreAnt, tAnt);
    i = 3;
    while (i <= qtT)
    {
        if(i%2==0){
            tAtual = tAnt-tPreAnt;
            
        }else{
            tAtual = tAnt+tPreAnt;
            

        }
        //printf("\n\n 1-[%d] %d %d %d ", i, tPreAnt, tAnt, tAtual);
        tPreAnt = tAnt;
        tAnt = tAtual;
        i++;
        if(i <= qtT){
            printf(" (%d) %d,", i-1, tAnt);
        }else{
            printf(" (%d) %d...\n",i-1, tAnt);
        }
    }}
void FATORIAL(){
       int n, f, i;
    
    	printf("Digite N fatorial: ");
    	scanf("%d", &n);
	    
    	f = 1; 
    	 for (i = 1; i <= n; i++){
    	 	f = f*i;
    	}

    	printf("%d", f);
}