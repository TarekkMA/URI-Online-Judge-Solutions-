#include<stdio.h>

void swap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)swap(x,y);
    for(int i=x;i<=y;i++)if(i%13)sum+=i;
    printf("%d\n",sum);
}