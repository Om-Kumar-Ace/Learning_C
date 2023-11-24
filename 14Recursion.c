#include<stdio.h>
int f(int x);
int main(){
    int a ;
    printf("Enter value  \n");
    scanf( "%d ", &a);
    printf("The factorial of %d is %d .\n",a,f(a));

    
    return 0;
}
int f(int x){
    if ( x==1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * f(x-1);
    }
    
}