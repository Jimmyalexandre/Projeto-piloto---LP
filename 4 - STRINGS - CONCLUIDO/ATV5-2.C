#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  50

int main(){
    int i, cont =0, cont_esp=0;
    char cid[N];

    printf("Digite o nome da cidade: ");
    gets(cid);

    for (i = 0; cid[i] != '\0'; i++)
    {
        if ((cid[i]=='a')||(cid[i]=='A'))
        {
            cont++;
        }else if(cid[i]==' '){
            cont_esp++;
        }
        
    }

    printf("Total de caracteres (A) e : %d", cont);
    printf("\nTotal de espacos e : %d", cont_esp);
    
 
    return 0;
}