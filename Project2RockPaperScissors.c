#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rps(char y,char c){
    if (y==c)
    {
        return 0;
    }
    else if (y=='s' && c=='p')
    {
        return 1;
    }
    else if (y=='s' && c=='r')
    {
        return -1;
    }
    if (y=='p' && c=='r')
    {
        return 1;
    }
    else if (y=='p' && c=='s')
    {
        return -1;
    }
    else if (y=='r' && c=='p')
    {
        return -1;
    }
    if (y=='r' && c=='s')
    {
        return 1;
    }
}
int main(){
    char y,c;
    int n;
    srand(time(0));
    n = rand ()%100+1;
    if (n<34)
    {
        c='r';
    }
    else if (n<66)
    {
        c='s';
    }
    else if (n<100)
    {
        c='p';
    }
    
    
    printf("Enter r for Rock \nEnter p for Paper \nEnter s for Scissors\n");
    printf("Enter your choice\n");
    scanf("%c",&y);
    int re = rps(y,c);
    if (re == 0)
    {
            printf("Draw!!!!!!\n");

    }
    else if (re == 1)
    {
            printf("You Win :)   !!!!!!\n");

    }
    else if (re == -1){
            printf("You Lose :)  :) !!!!!!\n");

    }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}