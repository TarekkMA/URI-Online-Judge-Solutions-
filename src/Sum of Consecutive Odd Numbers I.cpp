#include<stdio.h>
void swap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b,sum=0;
    scanf("%d\n%d",&a,&b);
    if(a>b)swap(a,b);
    for(int i=a+1;i<b;i++){
        if(i%2)sum+=i;
    }
    printf("%d\n",sum);
}