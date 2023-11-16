#include<stdio.h>

int main(){
    int a;
    int vip=0;
    vip=1;
    printf("Enter age -\n");
    scanf("%d", &a );

    if ((a <= 18 && a >= 70) || vip == 1){
        printf("You can drive .\n");
    }
    
    else
    {
        printf("You cannot drive .\n");
    }
    
    return 0;
}