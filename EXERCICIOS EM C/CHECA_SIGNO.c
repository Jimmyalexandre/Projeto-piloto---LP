#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

void data ();
int main(){
    
    setlocale(LC_ALL,"");

    valida_data();

    return 0;
}
void valida_data(){

    setlocale(LC_ALL,"");    
    int mes=0, dia=0, ano=0;
    int val=1;

    do{
        printf("Digite dia, mes, anos; ");
        scanf("%d%d%d", &dia, &mes, &ano);


        // verifica se o dia está no range de 1 a 31.
        if ((dia <= 0)||(dia >31))
        {
            printf("Data inválida. Número de dias inválidos.\n");
            val=0;
        // verifica se o mês esta no range de 1 a 12
        }else if((mes <= 0 )||(mes >= 13))
        {
            printf("Data inválida. Mês inválido.\n");
            val=0;
        // poderia ser menor q 0, mas assim força a digitação de pelo menos 4 digitos
        }else if (ano < 1900)
        {
            printf("Data inválida. Ano Inválido.\n");
            val=0;
        // verifica se o a quantidade de dias para o mes de fevereiro é inferior a 28,
        // ou se no caso de ano bissexto é de no maximo 29 dias
        }else if ((dia > 29 )&&(mes == 2) || (dia > 28) && (ano%4 != 0))
        {
            printf("Data inválida. Ano não é bissexto, ou não tem mais que 29 dias.\n");
            val=0;
        // verifica meses com 30 dias (Não inserir mes de fevereiro, pois buga o codigo :( )
        }else if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia >= 31))
        {
            printf("Data inválida. Esse mês não tem 31 dias.\n");
            val=0;
        }else
        {
            printf("Dia:%d/%d/%d\n\n", dia, mes, ano);
            printf("Você é do digno de: ");
            switch (mes)
            {
            case 1:  dia<=20 ? printf("Capricórnio"):    printf("Aquario") ;break;
            case 2:  dia<=19 ? printf("Aquario"):        printf("Peixes") ; break;
            case 3:  dia<=20 ? printf("Peixes"):          printf("Aries") ; break;
            case 4:  dia<=20 ? printf("Aries"):           printf("Touro") ; break;
            case 5:  dia<=20 ? printf("Touro"):          printf("Gemeos") ; break;
            case 6:  dia<=20 ? printf("Gemeos"):         printf("Câncer") ; break;
            case 7:  dia<=21 ? printf("Câncer"):           printf("Leão") ; break;
            case 8:  dia<=22 ? printf("Leão"):           printf("Virgem") ; break;
            case 9:  dia<=22 ? printf("Virgem"):          printf("Libra") ; break;
            case 10: dia<=22 ? printf("Libra"):       printf("Escorpião") ; break;
            case 11: dia<=22 ? printf("Escorpião"):   printf("Sagitário") ; break;
            case 12: dia<=22 ? printf("Sagitário"): printf("Capricórnio") ; break;
            }
        }
    }while (val == 0);
}
