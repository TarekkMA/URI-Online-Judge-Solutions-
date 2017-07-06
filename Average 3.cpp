#include<stdio.h>

int main(){
    float a,b,c,d,exam,avg;

    float w1 = 2,
          w2 = 3,
          w3 = 4,
          w4 = 1;

    scanf("%f %f %f %f",&a,&b,&c,&d);

    avg = (a*w1+b*w2+c*w3+d*w4)/(w1+w2+w3+w4);

    if(avg<7 && avg>=5)scanf("%f",&exam);

    printf("Media: %.1f\n",avg);

    if(avg >= 7)printf("Aluno aprovado.\n");
    else if(avg >= 5){
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",exam);
        avg = (avg+exam)/2;
        if(avg>=5)printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",avg);
    }
    else printf("Aluno reprovado.\n");

}