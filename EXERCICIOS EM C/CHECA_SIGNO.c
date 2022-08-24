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


        // verifica se o dia est� no range de 1 a 31.
        if ((dia <= 0)||(dia >31))
        {
            printf("Data inv�lida. N�mero de dias inv�lidos.\n");
            val=0;
        // verifica se o m�s esta no range de 1 a 12
        }else if((mes <= 0 )||(mes >= 13))
        {
            printf("Data inv�lida. M�s inv�lido.\n");
            val=0;
        // poderia ser menor q 0, mas assim for�a a digita��o de pelo menos 4 digitos
        }else if (ano < 1900)
        {
            printf("Data inv�lida. Ano Inv�lido.\n");
            val=0;
        // verifica se o a quantidade de dias para o mes de fevereiro � inferior a 28,
        // ou se no caso de ano bissexto � de no maximo 29 dias
        }else if ((dia > 29 )&&(mes == 2) || (dia > 28) && (ano%4 != 0))
        {
            printf("Data inv�lida. Ano n�o � bissexto, ou n�o tem mais que 29 dias.\n");
            val=0;
        // verifica meses com 30 dias (N�o inserir mes de fevereiro, pois buga o codigo :( )
        }else if(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia >= 31))
        {
            printf("Data inv�lida. Esse m�s n�o tem 31 dias.\n");
            val=0;
        }else
        {
            printf("Dia:%d/%d/%d\n\n", dia, mes, ano);
            printf("Voc� � do digno de: ");
            switch (mes)
            {
            case 1:  dia<=20 ? printf("Capric�rnio"):    printf("Aquario") ;break;
            case 2:  dia<=19 ? printf("Aquario"):        printf("Peixes") ; break;
            case 3:  dia<=20 ? printf("Peixes"):          printf("Aries") ; break;
            case 4:  dia<=20 ? printf("Aries"):           printf("Touro") ; break;
            case 5:  dia<=20 ? printf("Touro"):          printf("Gemeos") ; break;
            case 6:  dia<=20 ? printf("Gemeos"):         printf("C�ncer") ; break;
            case 7:  dia<=21 ? printf("C�ncer"):           printf("Le�o") ; break;
            case 8:  dia<=22 ? printf("Le�o"):           printf("Virgem") ; break;
            case 9:  dia<=22 ? printf("Virgem"):          printf("Libra") ; break;
            case 10: dia<=22 ? printf("Libra"):       printf("Escorpi�o") ; break;
            case 11: dia<=22 ? printf("Escorpi�o"):   printf("Sagit�rio") ; break;
            case 12: dia<=22 ? printf("Sagit�rio"): printf("Capric�rnio") ; break;
            }
        }
    }while (val == 0);
}
