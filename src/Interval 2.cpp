#include<stdio.h>

int main(){
    int size,x,s=10,e=20,cIn=0,cOut=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&x);
        if(x<=20 && x>=10)cIn++;
        else cOut++;
    }
    printf("%d in\n%d out\n",cIn,cOut);
}