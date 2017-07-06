#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)if(!(i%2))printf("%d^2 = %d\n",i,i*i);
}