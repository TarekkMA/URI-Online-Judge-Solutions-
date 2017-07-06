#include<stdio.h>

int main(){
    int tries = 6;
    int count = 0;
    float sum = 0;
    float x;
    while(tries--!=0){
        scanf("%f",&x);
        if(x>0){
            sum+=x;
            count++;
        }
    }
    float avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
}