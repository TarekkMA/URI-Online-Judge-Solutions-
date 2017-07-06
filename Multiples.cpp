#include<stdio.h>

void swap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)swap(a,b);
    
    printf("%s\n",(a%b==0)?"Sao Multiplos":"Nao sao Multiplos");
}