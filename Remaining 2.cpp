#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    int i = 2;
    while((i%13)!=2)i++;
    printf("%d\n",i);
    while(i<(10000-n))printf("%d\n",i+=n);
}