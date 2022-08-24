#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int valida_data (int dia, int mes, int ano);
int signo (int dia, int mes);
void imp_signo (int signo);

int main(){
    int dia, mes, ano;
    
    setlocale(LC_ALL,"");
    printf("Digite dia, mes, anos;\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    if(valida_data(dia, mes, ano) == 0 ){
        printf("DATA INVÁLIDA");
    }else if(valida_data(dia, mes, ano) == 1 ){
            
        printf("\nDia:%d/%d/%d\n", dia, mes, ano);
        printf("Você é do digno de: ");
        imp_signo(signo(dia,mes));        
    }

    return 0;
}
int valida_data (int dia, int mes, int ano){

    int val=1;

        // verifica se o dia está no range de 1 a 31.
        if ((dia <= 0)||(dia >31))
        {
            //printf("Data inválida. Número de dias inválidos.\n");
            val=0;
        // verifica se o mês esta no range de 1 a 12
        }else if((mes <= 0 )||(mes >= 13))
        {
            //printf("Data inválida. Mês inválido.\n");
            val=0;
        // poderia ser menor q 0, mas assim força a digitação de pelo menos 4 digitos
        }else if (ano < 1900)
        {
            //printf("Data inválida. Ano Inválido.\n");
            val=0;
        // verifica se o a quantidade de dias para o mes de fevereiro é inferior a 28,
        // ou se no caso de ano bissexto é de no maximo 29 dias
        }else if ((dia > 29 && mes == 2) || (dia > 28 && ano%4 != 0))
        {
            //printf("Data inválida. Ano não é bissexto, ou não tem mais que 29 dias.\n");
            val=0;
        // verifica meses com 30 dias (Não inserir mes de fevereiro, pois buga o codigo :( )
        }else if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia >= 31))
        {
            //printf("Data inválida. Esse mês não tem 31 dias.\n");
            val=0;
        }else
        {
            //printf("Dia:%d/%d/%d\n\n", dia, mes, ano);
            //printf("Você é do digno de: ");
            val = 1;
        }
    return val;
}
int signo (int dia, int mes){
    
    int sig = 0;

    switch (mes)
    {
        case 1: sig =  (dia<=20) ? 1 : 2 ; break;
        case 2: sig =  (dia<=19) ? 2 : 3 ; break;
        case 3: sig =  (dia<=20) ? 3 : 4 ; break;
        case 4: sig =  (dia<=20) ? 4 : 5 ; break;
        case 5: sig =  (dia<=20) ? 5 : 6 ; break;
        case 6: sig =  (dia<=20) ? 6 : 7 ; break;
        case 7: sig =  (dia<=21) ? 7 : 8 ; break;
        case 8: sig =  (dia<=22) ? 8 : 9 ; break;
        case 9: sig =  (dia<=22) ? 9 : 10 ; break;
        case 10:sig =  (dia<=22) ? 10 : 11; break;
        case 11:sig =  (dia<=22) ? 11 : 12; break;
        case 12:sig =  (dia<=22) ? 12 : 1 ; break;
        default: printf("Signo INEXISTENTE!!!");
    }
    return sig;
}
void imp_signo (int signo){
    switch (signo){
        case 1:  printf("Capricórnio\n"); break;
        case 2:  printf("Aquario\n");     break;
        case 3:  printf("Peixes\n") ;     break;
        case 4:  printf("Aries\n") ;      break;
        case 5:  printf("Touro\n") ;      break;
        case 6:  printf("Gemeos\n");      break;
        case 7:  printf("Câncer\n");      break;
        case 8:  printf("Leão\n");        break;
        case 9:  printf("Virgem\n");      break;
        case 10: printf("Libra\n");       break;
        case 11: printf("Escorpião\n");   break;
        case 12: printf("Sagitário\n");   break;
        }
}
