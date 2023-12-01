#include<stdio.h>
#include<string.h>
int main(){
    char *st="Om Kumar";
    char s[34];
    // printf("Enter your name :-");
    // scanf("%s",s);
    strcpy(s,st);

    printf("Your name is %s",s);
    // gets(s);
    // puts(s);
    //char *ptr ="Om";       {Both are
    //char ptr[]="Om";            same}
    return 0;
}