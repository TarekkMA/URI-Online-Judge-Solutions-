#include<stdio.h>

int main(){
    int lowerBound = 5;
    for(int i=1,j=7;j!=lowerBound-1;j--){
        printf("I=%d J=%d\n",i,j);
        if(j==lowerBound&&i!=9){
            lowerBound+=2;
            j=lowerBound+3;
            i+=2;
        }
    }
}