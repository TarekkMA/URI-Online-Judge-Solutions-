#include<stdio.h>

int main(){
    float n;
    float sum=0;
    int c=0;
    for(int i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            c++;
            sum+=n;
        }
    }
    printf("%.d valores positivos\n",c);
    printf("%g\n",sum/c);
    
}