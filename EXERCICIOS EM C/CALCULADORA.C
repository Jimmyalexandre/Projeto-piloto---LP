#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

#define T 11
void MENU();
void SOMA();
void SUB();
void MULT();
void DIV();
int main(){
    int op = -1;
    while (op!=0){
    	
    		MENU();
    		printf("Escolha Opcao: ");
    		scanf("%d", &op);
    		fflush(stdin);
    		
    		if (op == 1){
    			SOMA();
    			getch();
			}else if (op == 2){
				SUB();
				getch();	
			}else if ( op == 3 ){
				MULT();
				getch();
			}else if (op == 4){
				DIV();
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
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@GP5B@#55G@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#PPPB@@@@BP5#@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@B   G@5!!G@&&@@&#&@@&#&@@@&&@@&#&@@&#&@@&&&@@@&&&@@@@@@@@Y.   7@@@B. ^&@@&##&@@@@&&&@@@&#&@@\n");
    printf("@@@@@@@&:  5@J..5@?..!~..:?~..:#@?..!~..^?~..:##:.^@&7.~G@@@@@@B~ !Y  !@@&^ .#&Y  7~ :J@&~  Y5^ 7B@@\n");
    printf("@&GPP@@!  ?@G  !@5  !#Y  ~B5  ~@5  7#J  ~#5  ~@&: ^G: ?&@@@@@&?  :5?  ~@@7  PB:  !J?  !@@P    !B@@@@\n");
    printf("@5   7^ .J@#. :&B  ^@#. :&&: .#G  ~@#. ^&&: :#@@! . ^G@@@@@@5: :!!!:  :@Y  ?@J  ~    P&G!  ?  ^&@@@@\n");
    printf("@&  ??  &@@G  B@P  #@G  B@G  G@P  #@P  B@G  G&&#~ .Y@@@@@@@BJJY&@@@GJJ5&YJY&@& J   5B@G   @@Y  G@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&!^^^?#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("_______________________________\n");
    printf("| 1)soma                      |\n");
    printf("| 2)Subtracao                 |\n");
    printf("| 3)Multiplicacao             |\n");
    printf("| 4)Divisao                   |\n");
    printf("| 0)calc - SAIR               |\n");
    printf("-------------------------------\n");
}

void SOMA(){
    int n1, n2, s;
    printf("Insira os numeros a serem somados: \n");
    scanf("%d%d", &n1,&n2);
    s = n1+n2;
    printf("A soma de %d e %d eh: %d\n", n1, n2, s);
}
void SUB(){
    int n1, n2, s;
    printf("Insira os numeros a serem somados: \n");
    scanf("%d%d", &n1,&n2);
    s = n1-n2;
    printf("A subtracao de %d e %d eh: %d\n", n1, n2, s);
}
void MULT(){
    int n1, n2, s;
    printf("Insira os numeros a serem somados: \n");
    scanf("%d%d", &n1,&n2);
    s = n1*n2;
    printf("A multiplicacao de %d e %d eh: %d\n", n1, n2, s);
}
void DIV(){
    float n1, n2, s;
    printf("Insira os numeros a serem somados: \n");
    scanf("%f%f", &n1,&n2);
    while (n2==0)
    {   
        printf("Nao ha divisao por zero, tente novamente: \n");
        printf("Insira os numeros a serem somados: \n");
        scanf("%f%f", &n1,&n2);
    }
    
	s = n1/n2;
    printf("A divisao de %.2f e %.2f eh: %.2f\n", n1, n2, s);


}