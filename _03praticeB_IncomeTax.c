#include<stdio.h>

int main(){
    float tax = 0.0,i;
    printf("Enter your income- \n");
    scanf("%f",&i);

    if (i >= 250000 && i <= 500000)
    {
        tax = tax + 0.05 * (i - 250000);
    }

    if (i >= 500000 && i <= 1000000)
    {
        tax = tax + 0.20 *( i - 500000);
    }

    if (i >= 1000000)
    {
        tax = tax + 0.30 * ( i - 1000000);
    }

    printf("Your income tax to be paid is %f\n ",tax);

    return 0;
}