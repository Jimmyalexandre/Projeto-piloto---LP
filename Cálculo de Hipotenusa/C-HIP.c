#include<stdio.h>
#include<math.h>
int main(){

    double cat1 = 0, cat2 = 0, hip;

    while (cat1 <=0 || cat2 <= 0)
    {
        printf("Digite os dois catetos: ");
        scanf("%lf%lf", &cat1,&cat2);
    }
    
    hip = sqrt(pow(cat1, 2.0) + pow(cat2, 2.0));

    printf("Valor da Hipotenusa e :%4lf", hip);
    return 0;

}