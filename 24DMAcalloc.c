#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int n;
    printf("No of integers you want :");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("Value you want in %d is ",i+1);
        scanf("%d",&p[i]);
        
    }
    for (int i = 0; i <n ; i++)
    {
        printf("Value you want in %d is %d \n",i+1,p[i]);
    }
    
    return 0;
}