#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<time.h>
//#include<math.h>
#define TAM 2

typedef struct  Data{
    int dia;
    int mes;
    int ano;
} TData;
typedef struct  Pais{
    char nome[150];
    TData nascimento;    
    
} TPais;
typedef struct  Pessoa{
    char nome[150];
    TData nascimento;
    TPais Pai;
    TPais Mae;    
    
} TPessoa;

int numPess;
TPessoa *Pessoas;
void Menu();
void Init();
void Incluir();
void Listar();
void LimparMem();
int Salvar();
int Recuperar();

int main(){
    //TPessoa Pessoas[TAM];
    int op = -1;
    Init();
    while (op!=0){
    	
    		Menu();
    		printf("Escolha Opcao: ");
    		scanf("%d", &op);
    		fflush(stdin);
    		
    		if (op == 1){
    			Incluir();
    			getch();
			}else if (op == 2){
				if (Salvar()== 0){
					
					printf("-----------------------------\n");
					printf("**** ERRO AO SALVAR DADOS ***\n");
					printf("-----------------------------\n");
				}
				getch();	
			}else if ( op == 3 ){
				Listar();
				getch();
			}else if (op != 0){
				printf("*****   OPCAO INVALIDA   *****\n");
				getch();
			}
	}
	LimparMem();
	return 0;
}
void Menu(){
	system("cls");
	printf("------------------------------\n");
	printf("-1) Incluir                   \n");
	printf("-2) Salvar                    \n");
	printf("-3) Listar                    \n");
	printf("-0) Sair                      \n");
	printf("------------------------------\n");

}
void Init(){
    
    Pessoas = (TPessoa *) malloc(sizeof(TPessoa));
    numPess = 0;
    Recuperar();
}
void Incluir(){
	
        printf("Nome: ");
        gets(Pessoas[numPess].nome);
        fflush(stdin);

        printf("Data de Nascimento: ");
        scanf("%d%d%d", &Pessoas[numPess].nascimento.dia, &Pessoas[numPess].nascimento.mes, &Pessoas[numPess].nascimento.ano);
        fflush(stdin);

        printf("Nome do Pai: ");
        gets(Pessoas[numPess].Pai.nome);
        fflush(stdin);
        printf("Data de Nascimento do Pai: ");
        scanf("%d%d%d", &Pessoas[numPess].Pai.nascimento.dia, &Pessoas[numPess].Pai.nascimento.mes, &Pessoas[numPess].Pai.nascimento.ano);
        fflush(stdin);

        printf("Nome do Mae: ");
        gets(Pessoas[numPess].Mae.nome);
        fflush(stdin);
        printf("Data de Nascimento da Mae: ");
        scanf("%d%d%d", &Pessoas[numPess].Mae.nascimento.dia, &Pessoas[numPess].Mae.nascimento.mes, &Pessoas[numPess].Mae.nascimento.ano);
        fflush(stdin);
        
        numPess++;
        Pessoas = realloc(Pessoas, (numPess+1)* sizeof(TPessoa));
        if(Pessoas == NULL){
			printf("Erro de Memoria!!\n");
		}
		
		printf("-----------------------------\n");
		printf("***** [ INCLUSAO - OK]  *****\n");
		printf("-----------------------------\n");
}
void Listar(){
	    int i;
	    
	        	if (numPess <=0 ){
    		printf("-----------------------------\n");
			printf("**  SEM DADOS CADASTRADOS  **\n");
			printf("-----------------------------\n");
		} else{
			printf("-----------------------------\n");
			printf("****  DADOS CADASTRADOS  ****\n");
			printf("-----------------------------\n");
			for (i = 0; i < numPess ;i++){
				
        		printf("\n*********************************************\n");
        		printf("Nome: %s",Pessoas[i].nome);
        		printf("\nData de Nascimento: %d/%d/%d", Pessoas[i].nascimento.dia, Pessoas[i].nascimento.mes, Pessoas[i].nascimento.ano);

        		printf("\nNome do Pai: %s", Pessoas[i].Pai.nome);
        		printf("\nData de Nascimento do Pai: %d/%d/%d", Pessoas[i].Pai.nascimento.dia, Pessoas[i].Pai.nascimento.mes, Pessoas[i].Pai.nascimento.ano);

        		printf("\nNome da Mae: %s ", Pessoas[i].Mae.nome);
        		printf("\nData de Nascimento da Mae: %d/%d/%d", Pessoas[i].Mae.nascimento.dia, Pessoas[i].Mae.nascimento.mes, Pessoas[i].Mae.nascimento.ano);
        		printf("\n*********************************************\n");
    		}
		}
	}

void LimparMem(){
	free(Pessoas);
}
int Salvar(){
	
	FILE *fArq;
	int i;
	
	if(numPess <=0 ){
		printf("-----------------------------\n");
		printf("**  SEM DADOS CADASTRADOS  **\n");
		printf("-----------------------------\n");
		return -1;
	}
	
	fArq = fopen("pessoas.txt", "w");
	
	if(fArq!=NULL){
		for(i = 0; i < numPess ; i++){
			
			fprintf(fArq, "%s;", Pessoas[i].nome);
			fprintf(fArq, "%d;%d;%d;", Pessoas[i].nascimento.dia, Pessoas[i].nascimento.mes, Pessoas[i].nascimento.ano);
			
			fprintf(fArq, "%s;", Pessoas[i].Pai.nome);
			fprintf(fArq, "%d;%d;%d;", Pessoas[i].Pai.nascimento.dia, Pessoas[i].Pai.nascimento.mes, Pessoas[i].Pai.nascimento.ano);	
			
			fprintf(fArq, "%s;", Pessoas[i].Mae.nome);
			fprintf(fArq, "%d;%d;%d;\n", Pessoas[i].Mae.nascimento.dia, Pessoas[i].Mae.nascimento.mes, Pessoas[i].Mae.nascimento.ano);						
		}
		
		fclose(fArq);
		printf("\n*****************************\n");
		printf("\n****  DADOS SALVOS  *********\n");
		printf("\n*****************************\n");
		
		return 1; 
	}
	
	return 0;

}
int Recuperar(){
    FILE *fArq;
    char c, strAux[100];
    int i, numPV = 0;

    fArq = fopen("pessoas.txt", "r");

    if(fArq!=NULL){

        while ((c = getc(fArq)) != EOF){
            if (c!='\n'){
                if(c==';'){
                    strAux[i] = '\0';
                    switch (numPV){
                    	case 0: strcpy(Pessoas[numPess].nome,strAux); break;
                    	case 1: Pessoas[numPess].nascimento.dia = atoi(strAux); break;
                    	case 2: Pessoas[numPess].nascimento.mes = atoi(strAux); break;;
                    	case 3: Pessoas[numPess].nascimento.ano = atoi(strAux); break;;
                    	case 4: strcpy(Pessoas[numPess].Pai.nome,strAux); break;;
                    	case 5: Pessoas[numPess].Pai.nascimento.dia = atoi(strAux); break;
                    	case 6: Pessoas[numPess].Pai.nascimento.mes = atoi(strAux); break;
                    	case 7: Pessoas[numPess].Pai.nascimento.ano = atoi(strAux); break;
                    	case 8: strcpy(Pessoas[numPess].Mae.nome,strAux); break;;
                    	case 9: Pessoas[numPess].Mae.nascimento.dia = atoi(strAux); break;;
                    	case 10:Pessoas[numPess].Mae.nascimento.mes = atoi(strAux); break;;
                    	case 11:Pessoas[numPess].Mae.nascimento.ano = atoi(strAux); break;;
                    }
                    
                    numPV++;
                    i=0;
                    
                }else{
                	strAux[i]=c;
                	i++  ;                  
                }
            }else{
            	numPV=0;
                    numPess++;
                    Pessoas = realloc(Pessoas, (numPess+1) *sizeof(TPessoa));
		}
            

                       
        }
        fclose(fArq);

        return 1;       
    }

    return 0; 
}



