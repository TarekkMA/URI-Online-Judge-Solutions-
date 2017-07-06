#include<stdio.h>

int main(){
    int notes[] = {100,50,20,10,5,2,1};
    int myNotes[] = {0,0,0,0,0,0,0};
    int money;
    scanf("%d",&money);
    printf("%d\n",money);

    for (size_t i = 0; i < 7; i++){
        myNotes[i] = money/notes[i];
        money-=myNotes[i]*notes[i];
        printf("%d nota(s) de R$ %d,00\n",myNotes[i],notes[i]);
    }
}