#include<stdio.h>

int main(){
    float score1=-1,score2=-1;
    float s1,s2;

    do{
        scanf("%f",&s1);
        if(s1>10||s1<0) printf("nota invalida\n");
        else score1=s1;
    }while(score1==-1);
    do{
        scanf("%f",&s2);
        if(s2>10||s2<0) printf("nota invalida\n");
        else score2=s2;
    }while(score2==-1);
    printf("media = %.2f\n",(score1+score2)/2);
}