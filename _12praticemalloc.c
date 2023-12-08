#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d\n",i+1,p[i]);
    }
    p=realloc(p,5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d \n",i+1,p[i]);
    }
    return 0;
}