#include<stdio.h>

int main(){
    int p,r,t;
    printf("The Principal Ammount \n");
    scanf("%d", &p);

    printf("The Rate of intrest \n");
    scanf("%d", &r);

    printf("The Time period \n");
    scanf("%d", &t);

    printf("The simple intrest is  %d \n", p*r*t/100);
    return 0;
}