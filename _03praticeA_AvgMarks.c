#include<stdio.h>

int main(){
    int p,c,m;
    float t;
    printf("Enter marks of Physics -\n");
    scanf("%d",&p);
    printf("Enter marks of Chemistry -\n");
    scanf("%d",&c);
    printf("Enter marks of Maths -\n");
    scanf("%d",&m);
    t=(p+m+c)/3;
    if ((t<40) || p < 33 || c < 33 || m < 33 )
    {
        printf("Fail !!!!!!\n");
        printf("Your Avg marks is %f \n", t);
    }
    else
    {
        printf("You are pass\n");
        printf("Your Avg marks is %f \n ", t);
    }
    

    return 0;
}