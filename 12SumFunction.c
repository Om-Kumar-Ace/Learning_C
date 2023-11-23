#include<stdio.h>
int sum (int a, int b);
int main(){
    int c;
    c = sum (3,4);
    printf("The sum is %d \n", c );
    return 0;
}
int sum (int a, int b){
    int r;
    r=a+b;
    return r;
}