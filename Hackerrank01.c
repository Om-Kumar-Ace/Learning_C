#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int x=a;
    if(x<b){
        x=b;
    }
    if(x<c){
        x=c;
    }
    if(x<d){
        x=d;
    }
    return x ;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
