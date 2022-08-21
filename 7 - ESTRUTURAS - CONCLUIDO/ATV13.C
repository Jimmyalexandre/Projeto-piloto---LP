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
    char nome[100];
    TData nascimento;    
    
} TPais;
typedef struct  Pessoa{
    char nome[100];
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
    TPessoa Pessoas[TAM];
    int i;
    for (i = 0; i < TAM ;i++)
    {
        printf("\n*********************************************\n");
        printf("Nome: %s",Pessoas[i].nome);
        printf("\nData de Nascimento: %.2d/%.2d/%d", Pessoas[i].nascimento.dia, Pessoas[i].nascimento.mes, Pessoas[i].nascimento.ano);

        printf("\nNome do Pai: %s", Pessoas[i].Pai.nome);
        printf("\nData de Nascimento do Pai: %.2d/%.2d/%d", Pessoas[i].Pai.nascimento.dia, Pessoas[i].Pai.nascimento.mes, Pessoas[i].Pai.nascimento.ano);

        printf("\nNome da Mae: %s ", Pessoas[i].Mae.nome);
        printf("\nData de Nascimento da Mae: %.2d/%.2d/%d", Pessoas[i].Mae.nascimento.dia, Pessoas[i].Mae.nascimento.mes, Pessoas[i].Mae.nascimento.ano);
        printf("\n*********************************************\n");
    }
    

}
void Menu(){

}
void Init(){
    
    Pessoas = (TPessoa *) malloc(sizeof(TPessoa));
    numPess = 0;
    Recuperar();
}
void Incluir(){
        printf("Nome: ");
        gets(Pessoas[i].nome);
        fflush(stdin);

        printf("Data de Nascimento: ");
        scanf("%d%d%d", &Pessoas[i].nascimento.dia, &Pessoas[i].nascimento.mes, &Pessoas[i].nascimento.ano);
        fflush(stdin);

        printf("Nome do Pai: ");
        gets(Pessoas[i].Pai.nome);
        fflush(stdin);
        printf("Data de Nascimento do Pai: ");
        scanf("%d%d%d", &Pessoas[i].Pai.nascimento.dia, &Pessoas[i].Pai.nascimento.mes, &Pessoas[i].Pai.nascimento.ano);
        fflush(stdin);

        printf("Nome do Mae: ");
        gets(Pessoas[i].Mae.nome);
        fflush(stdin);
        printf("Data de Nascimento da Mae: ");
        scanf("%d%d%d", &Pessoas[i].Mae.nascimento.dia, &Pessoas[i].Mae.nascimento.mes, &Pessoas[i].Mae.nascimento.ano);
        fflush(stdin);
}
void Listar(){

}
void LimparMem(){
}
int Salvar(){

}
int Recuperar(){
    FILE *fArq;
    char c, strAux[100];
    int i, numPV = 0;

    fArq = fopen("pessoas.txt", "r");

    if(fArq!=NULL){

        while ((c = get(fArq)) != EOF){
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
                    numPV=0;
                    numPess++;
                    Pessoas = realloc(Pessoas, (numPess+1) *sizeof(TPessoa));
                }
            }

                       
        }
        fclose(fArq);

        return 1;       
    }

    return 0; 
}


