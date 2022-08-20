 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #define L 3
 #define C 50

 int main(){
    int i, j, tam = 0;
    char nome[L][C];
    for (i = 0; i < L; i++)
    {
        printf("Digite um nome: ");
        gets(nome[i]);
    }
    printf("\n");
    for (i = 0; i < L; i++)
    {   
        for (j = 0; nome[i][j] != '\0' ; j++)
        {
            //printf("%c", nome[i][j]);
            tam++;
        }
        
        printf("%s", nome[i]);
        //puts(nome[i]);     
        printf(" tem %d caracteres.\n", tam);
        tam=0;
    }
    printf("%s", nome[i]);
    //puts(nome[i]);

    printf("\n\n");
    
        

    return 0;
 }