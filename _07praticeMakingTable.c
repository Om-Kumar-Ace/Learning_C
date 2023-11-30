#include<stdio.h>

int main(){
    int m[10];
    int t;
    printf("Enter the no :-");
    scanf("%d",&t);
    printf("The Table of no %d is :-\n",t);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n",t,i+1,t*(i+1));
    }
    
    return 0;
}