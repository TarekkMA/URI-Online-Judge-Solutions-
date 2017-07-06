#include<stdio.h>
#include <string.h>

int main(){
    char string[1000];
    int n;
    scanf("%d",&n);
    while(n--!=0){
        scanf("%s",&string);
        int len = strlen(string);
        for (int i = 0; i < len; i++){
            string[i]+=3;
            //if(i>=len/2)string[i]-=1;
        }
        printf("%s\n",string);
    }
}