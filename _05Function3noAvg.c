#include<stdio.h>
float Avg(int a,int b ,int c );
int main(){
    int a , b, c;
    printf(" Enter the value of a \n",a);
    scanf("%d", &a);
    printf(" Enter the value of b \n",b);
    scanf("%d", &b);
    printf(" Enter the value of c \n",c);
    scanf("%d", &c);
    printf("The value of avg of a, b & c is %f" , Avg(a,b,c));
    return 0;
}
float Avg(int a,int b ,int c ){
    float r ;
    r =(float)(a+b+c)/3;
    return r;
}