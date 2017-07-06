#include<stdio.h>
void swap(int&a,int&b){
    int temp = a;
    a = b;
    b = temp;
}
void read(int&n,int&m){
    scanf("%d %d",&n,&m);
    if(n>m)swap(n,m);
}
int main(){
    int n,m,sum;
    read(n,m);
    while(n>0&&m>0){
        sum = 0;
        for(int i=n;i<=m;i++){
            printf("%d ",i);
            sum += i;
        }
        printf("Sum=%d\n",sum);
        read(n,m);
    }
}