#include<stdio.h>

int main(){
    float s,p,i;
    scanf("%f",&s);

    if(s>2000)p=4;
    else if(s>1200)p=7;
    else if(s>800)p=10;
    else if(s>400)p=12;
    else p = 15;

    i = s * p / 100.0;

    printf("Novo salario: %.2f\n",s+i);
    printf("Reajuste ganho: %.2f\n",i);
    printf("Em percentual: %.0f %\n",p);
}