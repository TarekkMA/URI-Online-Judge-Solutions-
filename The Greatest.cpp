#include<stdio.h>

int getGratest(int a,int b){
    int diff = (a>b)?a-b:b-a;
    return (a+b+diff)/2;
}

int getGratest(int a,int b,int c){
    return getGratest(getGratest(a,b),c);
}

int main(){

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    printf("%d eh o maior\n",getGratest(a,b,c));

    return 0;

}