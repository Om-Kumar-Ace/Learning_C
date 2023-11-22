#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n ,g ,ng;
    srand(time(0));
    n = rand ()%100+1;
    //printf("The no is %d \n ", n);
    do
    {
        printf("Guess the no between 1 to 100\n");
        scanf("%d", &g);

        if (g>n)
        {
            printf("Lower no please \n");
        }
        
        else if (g<n)
        {
            printf("Higher no please \n");
        }
        
        else
        {
            printf("****Your guess is Correct :) ****\n");
            printf("You guessed in %d attempts \n",ng);
        }
        ng++;

    } while (g!=n);
    
    return 0;
}