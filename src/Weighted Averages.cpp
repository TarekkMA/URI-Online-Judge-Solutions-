#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    while(n--!=0){
        float a,b,c,res;
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(2*a+3*b+5*c)/(2.0+3.0+5.0));
    }
}