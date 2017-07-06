#include<stdio.h>

void swap(double&a,double&b){
    double temp = a;
    a = b;
    b = temp;
}

int main(){
    double a,b,c,aa,bb,cc;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a<b)swap(a,b);
    if(a<c)swap(a,c);
    if(b<c)swap(b,c);

    aa=a*a;
    bb=b*b;
    cc=c*c;

    //printf("%lf %lf %lf\n",a,b,c);

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(aa == bb + cc){
            printf("TRIANGULO RETANGULO\n");
        }else if(aa > bb + cc){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(aa < bb + cc){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        else if(a==b || b==c || a==c)
            printf("TRIANGULO ISOSCELES\n");
                
    }
    

}