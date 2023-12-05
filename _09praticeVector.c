#include<stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector sum( struct vector v1 ,struct vector v2)
{
    struct vector result;
    result.x=v1.x +v2.x;
    result.y=v1.y +v2.y;
    return result;
};

int main(){
    struct vector v1 ,v2,s;
    printf("Enter value :");
    scanf("%d",&v1.x);
    printf("Enter value :");
    scanf("%d",&v1.y);
    printf("The value of V1 X & Y is %d & %d .\n",v1.x,v1.y);
    
    printf("Enter value :");
    scanf("%d",&v2.x);
    printf("Enter value :");
    scanf("%d",&v2.y);
    printf("The value of V2 X & Y is %d & %d .\n",v2.x,v2.y);
    s = sum(v1,v2);
    printf("The Sum value  is %d & %d .\n",s.x,s.y);
    return 0;
}