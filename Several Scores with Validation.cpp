#include<stdio.h>

int main(){
    int tries = 2;
    float totalScore=0;
    float score=-1;
    float s;

    oneMore:
    totalScore = 0;
    while(tries--!=0){
        score = -1;
        do{
            scanf("%f",&s);
            if(s>10||s<0) printf("nota invalida\n");
            else score=s;
        }while(score==-1);
        totalScore += score;
    }
    printf("media = %.2f\n",totalScore/2);

    int choice = -1;
    while(choice!=1&&choice!=2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&choice);
    }
    if(choice==1){
        tries=2;
        goto oneMore;
    }
}