#include<stdio.h>

void swap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp; 
}

int main(){
    int a,b,c;
    int i,j,k;
    scanf("%d %d %d",&a,&b,&c);

    i = a;
    j = b;
    k = c;

    if(i>j)swap(i,j);
    if(i>k)swap(i,k);
    if(j>k)swap(j,k);

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",i,j,k,a,b,c);
}