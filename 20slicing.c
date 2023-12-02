#include<stdio.h>

void slice(char *s,int m,int n){
    int i = 0;
    while (m+i<n)
    {
        s[i]=s[i+m];
        i++;
    }
    s[i]='\0';
}
int main(){
    char s[120];
    int a, j;
    printf("Enter the string :-");
    scanf("%s", s);
    printf("Enter the no to start string from :-");
    scanf("%d",&a );
    printf("Enter the no to end  string  to:-");
    scanf("%d",&j);
    printf("Your string is %s and it will start from %d to %d \n",s,a,j);
    slice(s,a,j);
    printf("%s",s);
    return 0;
}