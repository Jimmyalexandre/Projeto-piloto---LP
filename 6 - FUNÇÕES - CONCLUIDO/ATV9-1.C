 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #define L 5
 #define C 5

void soma(int a[][C], int b[][C], int s[][C]);
int somaL (int vet[]);
 int main(){
    int ma[L][C], mb[L][C], mc[L][C], i, j, calc;
    srand(time(NULL));

    for (i = 0; i < L; i++)
    {
        for ( j = 0; j < C; j++){
            ma[i][j]=rand()%101;
            mb[i][j]=rand()%101;
        }
        
    }
    printf("\nMatriz A:\n");
    for (i = 0; i < L; i++)
    {
        printf("\n");
        for (j = 0; j < C; j++)
        {
            printf("[%3d]", ma[i][j]);
        }
    }

    printf("\n\nMatriz B:\n");
    for (i = 0; i < L; i++)
    {
        printf("\n");
        for (j = 0; j < C; j++)
        {
            printf("[%3d]", mb[i][j]);
        }
    }
    soma(ma, mb, mc);
    printf("Matriz C:\n");
        for(i=0; i < L ; i++){
            for ( j = 0; j < C; j++){
                printf("[%3d]", mc[i][j]);
            }
            printf("\n");
        }
    printf("\n");

    for (i = 0; i < L; i++)
    {
        calc = somaL(mc[i]);
        printf("\nA soma da linha %d e: %d", i, calc);
        
    }
    


    
    
    return 0;
 }

 void soma(int a[][C], int b[][C], int s[][C]){
    int i, j;
        for(i = 0; i < L; i++){
            printf("\n");
            for ( j = 0; j < C; j++){
                s[i][j]= a[i][j] + b[i][j];
            }
        
    }

 }

 int somaL (int vet[]){
    int i, res = 0;
    for(i = 0; i < C; i++){
        res+=vet[i];
    }

    return res;

 }