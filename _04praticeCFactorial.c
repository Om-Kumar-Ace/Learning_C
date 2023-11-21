#include<stdio.h>

int main(){
    int i, n = 3, f = 1;

    
    for (i = 1; i <= n; ++i)
    {
        f *= i;  
    }

    printf("The value of factorial %d is %d", n, f);
    return 0;
}
