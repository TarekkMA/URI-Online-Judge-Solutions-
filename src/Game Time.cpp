#include<stdio.h>

int main(){
    int a,b,c,d,totala,totalb;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a==c && b==d)totala = 24;
    else{
        if(a>c){
            totala = (24-a)+c;
        }else if(a<c){
            totala = c-a;
        }

        if(b>d){
            totalb = (60-b)+d;
            totala--;
        }else if(b<d){
            totalb = d-b;
        }
    }

    if(totala<0)totala=24+totala;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totala,totalb);
}