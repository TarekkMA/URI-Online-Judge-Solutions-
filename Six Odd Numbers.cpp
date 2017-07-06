#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for(int i=x;i<=x+12;i++)if((i%2))printf("%d\n",i);
}