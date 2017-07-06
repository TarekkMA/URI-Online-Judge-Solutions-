#include<stdio.h>

int main(){
    float s;
    scanf("%f",&s);
    float tax = 0;


    if(s<=2000){
        printf("Isento\n");
    }else{
        if(s>4500){
            tax+=(s-4500)*0.28;
            s = 4500;
        }
        if(s>3000){
            tax+=(s-3000)*0.18;
            s = 3000;
        }
        if(s>2000){
            tax+=(s-2000)*0.08;
        }
        printf("R$ %.2f\n",tax);
    }

}