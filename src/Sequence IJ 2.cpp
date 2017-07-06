#include<stdio.h>

int main(){
    for(int i=1,j=7;j!=4;j--){
        printf("I=%d J=%d\n",i,j);
        if(j==5&&i!=9){j=8;i+=2;}
    }
}