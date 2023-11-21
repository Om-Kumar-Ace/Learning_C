#include<stdio.h>

int main(){
    int n= 45 , prime =0 ;
    for ( i = 2; i < 45; i++)
    {
        if (n%i==0)
        {
            prime=1;
            break;
            
        }
        
    }
    if (prime == 0 && n !=2 )
    {
        printf(" This is not a prime no .\n");
    }
    else
    {
        printf(" This is a prime no .\n");
    }
    
    return 0;
}