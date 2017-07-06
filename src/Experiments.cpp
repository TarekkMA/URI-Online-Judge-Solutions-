#include<stdio.h>

int main(){
    int totalRead;
    int coelho=0,rato=0,sapo=0;

    scanf("%d",&totalRead);

    int c=0;
    while(c++<totalRead){
        int num;
        char type;
        scanf("%d %c",&num,&type);
        switch(type){
            case 'C':coelho+=num;break;
            case 'R':rato+=num;break;
            case 'S':sapo+=num;break;
        }
    }

    int total = coelho+rato+sapo;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n",coelho );
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n",sapo );
    printf("Percentual de coelhos: %.2f %\n",100.0*coelho/total);
    printf("Percentual de ratos: %.2f %\n",100.0*rato/total);
    printf("Percentual de sapos: %.2f %\n",100.0*sapo/total);

}