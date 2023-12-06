#include<stdio.h>
typedef struct complex
{
    int r;
    int c ;
}comp;

void display (comp ca){
    printf("The real value is %d \n",ca.r);
    printf("The imaginary value is %d \n",ca.c);
}
int main(){
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num \n",i+1);
        scanf("%d",&cnums[i].r);
        printf("Enter the complex value for %d num \n",i+1);
        scanf("%d",&cnums[i].c);
    }
    for (int i = 0; i < 5; i++)
    {
       display(cnums[i]);
    }
    return 0;
}