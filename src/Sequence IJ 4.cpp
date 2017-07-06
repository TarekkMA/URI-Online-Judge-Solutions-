#include<stdio.h>

int main(){
    int iStreak = 0;
    float i=0,j=1;
    float iPrev = i;
    float jStart = j;

    while(i<=2.2){
        printf("I=%g J=%g\n",i,j);

        if(iPrev == i)iStreak++;
        else iStreak=1;

        if(iStreak==3){
            i += 0.2;
            jStart += 0.2;
            j = jStart;
            iStreak = 0;
        }else{
            j++;
        }

        iPrev = i;
    }
}