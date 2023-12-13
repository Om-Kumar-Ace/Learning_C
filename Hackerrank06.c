#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int arr[2*n-1][2*n-1];
    int a =0, b =1,c;
    c = 2*n-2;
    int k =n;
    for (int i = 0; k>0 ; ++i)
    {
        arr[a][i] = k;
        arr[i][a] = k;
        arr[c][i] = k;
        arr[i][c] = k;
    if(i>=2*n-b-1)
    {
        a = a+1;
        i = a-1 ;
        b++;
        k--;
        c--;
        }
        }
        for (int i = 0; i < 2*n-1; ++i)
        {
            for (int j = 0; j < 2*n-1; ++j)
            {
                printf("%d ", arr[i][j]);
            }
        printf("\n");
    }
    return 0;
}
