#include<stdio.h>
void wrong_swap(int x,int y);
void swap(int *x, int *y);
int main(){
    int x=3, y=4;

    printf("The value of x and y is %d and %d \n",x,y);
    wrong_swap(x,y);
    printf("The value of x and y is %d and %d \n",x,y);
    swap(&x,&y);
    printf("The value of x and y is %d and %d \n",x,y);
    return 0;
}
void wrong_swap(int a,int b){
    int temp ;
    temp = a;
    a = b;
    
    b = temp;

}
void swap(int *a, int *b){
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;


}