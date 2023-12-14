#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,k, j=0;
    scanf("%d",&i);
    int n[i];
    for (int r=0; r<i;r++){
        scanf("%d", &n[r]);
    } 
    for (int r=0; r<i;r++){
        j+=n[r];
    }
    printf("%d",j);
    return 0;
}