#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        sum += temp % 10;  
        temp /= 10;        
    }

    printf("%d\n", sum);
    return 0;
}