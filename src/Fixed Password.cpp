#include<stdio.h>

int main(){
    int pass=-1;
    while(1){
        scanf("%d",&pass);
        if(pass==2002)break;
        else printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
}