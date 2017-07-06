#include<stdio.h>

int main(){
    int numOfD,x,y;
    scanf("%d",&numOfD);
    while(numOfD--!=0){
        scanf("%d %d",&x,&y);
        if(y==0) printf("divisao impossivel\n"); 
        else     printf("%.1f\n",(float)x/y);
    }
}