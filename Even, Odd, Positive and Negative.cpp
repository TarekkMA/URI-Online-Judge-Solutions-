#include<stdio.h>

int main(){
    int x,cP=0,cN=0,cE=0,cO=0;
    for(int i=0;i<5;i++){
        scanf("%d",&x);
        if(x%2)cO++;
        else cE++;
        if(x>0) cP++;
        else if(x<0) cN++;
    }
    printf("%d valor(es) par(es)\n",cE);
    printf("%d valor(es) impar(es)\n",cO);
    printf("%d valor(es) positivo(s)\n",cP);
    printf("%d valor(es) negativo(s)\n",cN);
}