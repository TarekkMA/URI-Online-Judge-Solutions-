#include<stdio.h>

int main(){
    int highestPos = -1;
    int highestVal = -1;//def val

    int val;
    int pos = 1;
    while(pos<=100){
        scanf("%d",&val);
        if(val>highestVal){
            highestVal = val;
            highestPos = pos;
        }
        pos++;
    }
    printf("%d\n%d\n",highestVal,highestPos);
}