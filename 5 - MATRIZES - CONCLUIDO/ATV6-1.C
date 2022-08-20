 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #define L 5
 #define C 5

 int main(){
    int m[L][C], i, j;
    srand(time(NULL));

    for (i = 0; i < L; i++)
    {
        printf("\n");
        for ( j = 0; j < C; j++)
        {
            m[i][j]=1 + rand()%98;
            printf(" [%.2d]", m[i][j]);
        }
        
    }
    
    return 0;
 }