#include<stdio.h>
#include<math.h>
int main(){

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
    printf("\n*******************Calculo desxonto produto*******************\n");
    

//    printf("%.2f\n",preco_produto);
//    printf("%.2f\n",desconto_produto);
//    printf("%.2f",preco_calculado);
    return 0;

}