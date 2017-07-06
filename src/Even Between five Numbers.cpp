#include<stdio.h>

int main(){
    int tries = 5;
    int x;
    int count = 0;
    while(tries--!=0){
        scanf("%d",&x);
        if(x%2==0)count++;
    }
    printf("%d valores pares\n",count);
}