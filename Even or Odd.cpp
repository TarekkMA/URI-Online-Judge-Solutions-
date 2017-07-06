#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    int x;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x==0) printf("NULL\n");
        else{
            if(x%2) printf("ODD ");
            else printf("EVEN ");
            if(x>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
    }
}