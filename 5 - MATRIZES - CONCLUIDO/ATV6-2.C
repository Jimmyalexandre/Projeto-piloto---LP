 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #define L 5
 #define C 5

 int main(){
    int ma[L][C], mb[L][C], mc[L][C], i, j;
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
    printf("\n\nSomatorio das matrizes A + B:\n");
    for (i = 0; i < L; i++)
    {   
        printf("\n");
        for ( j = 0; j < C; j++){
            mc[i][j]= ma[i][j] + mb[i][j];
            printf("[%3d]", mc[i][j]);
        }
        
    }
    printf("\n\n\n");
    
    
    return 0;
 }