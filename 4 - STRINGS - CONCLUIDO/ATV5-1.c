#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N  50

int main(){
    int i;
    char cid[N];

    cid[0] = 'a';
    cid[1] = 'g';
    cid[2] = 'u';
    cid[3] = 'a';
    cid[4] = '\0';
    
    //printf("Digite o nome da cidade: ");
    //gets(cid);
    puts(cid);

    return 0;
}