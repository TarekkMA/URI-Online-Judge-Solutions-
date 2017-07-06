#include<stdio.h>

int main(){
    char monthes[][20] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int n;
    scanf("%d",&n);
    printf("%s\n",monthes[n-1]);

}