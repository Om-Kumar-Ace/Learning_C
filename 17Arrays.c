#include<stdio.h>

int main(){
    int m[5];
    /*printf("Enter marks of Sub 1  :");
    scanf("%d",&m[0]);
    printf("Enter marks of Sub 2  :");
    scanf("%d",&m[1]);
    printf("Enter marks of Sub 3  :");
    scanf("%d",&m[2]);
    printf("Enter marks of Sub 4  :");
    scanf("%d",&m[3]);
    printf("Enter marks of Sub 5  :");
    scanf("%d",&m[4]);

    printf("your marks are %d,%d,%d,%d & %d",m[0],m[1],m[2],m[3],m[4]);
    return 0;*/

    //optional
    for (int i = 0; i <5; i++)
    {
        printf("Enter marks of Sub %d :",i+1);
        scanf("%d",&m[i]);
    }
    //printf("your marks are %d,%d,%d,%d & %d\n",m[0],m[1],m[2],m[3],m[4]);
    for (int i = 0; i <5; i++)
    {
        printf("Your marks of Sub %d is %d \n:",i+1,m[i]);
        
    }
    return 0;
     
}