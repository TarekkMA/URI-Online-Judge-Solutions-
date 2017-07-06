#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main(){

    const int aguia = 0;
    const int pomba = 1;
    const int homem = 2;
    const int vaca = 3;
    const int pulga = 4;
    const int lagarta = 5;
    const int sanguessuge = 6;
    const int minhoca = 7;


    string a,b,c;
    int i,j,k;
    cin >> a >> b >> c;

    char data[2][2][2][15]
    ={
        {
            {
                "aguia","pomba"
            },
            {
                "homem","vaca"
            }
        },
        {
            {
                "pulga","lagarta"
            },
            {
                "sanguessuga","minhoca"
            }
        }
    };

    if(a == "vertebrado")i = 0;
    else if(a == "invertebrado")i = 1;
    

    if(b=="ave" || b=="inseto")j = 0;
    else if(b=="mamifero"||b=="anelideo")j = 1;

    if(c=="carnivoro"||c=="hematofago")k=0;
    else if(c=="herbivoro")k=1;
    else if(c=="onivoro"){
        if(j==0&&i==0)k=1;
        else if(j==1&&i==0)k=0;
        else k=1;
    }

    //printf("%d %d %d\n",i,j,k);
    printf("%s\n",data[i][j][k]);
}