#include<stdio.h>

int main(){
    int a,b,q,r;
    scanf("%d %d",&a,&b);


    //https://math.stackexchange.com/questions/623449/negative-number-divided-by-positive-number-what-would-be-remainder
    //no negative reminader
    r = a%b;
    if(r<0)if(b<0)r-=b;else r+=b;
    q = (a-r)/b;

    printf("%d %d\n",q,r);
}