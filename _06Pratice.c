#include<stdio.h>
void SumAvg (int a,int b, int *sum ,float *avg){
    *sum = a+b;
    *avg = *sum/2;
}
int main(){
    int i,j,sum;
    float avg;
    i=3;
    j=4;
    SumAvg (i ,j, &sum, &avg);
    printf("Value of sum and avg is %d & %f \n",sum ,avg);
    return 0;
}