#include<stdio.h>
#include<string.h>
int main(){
    //char *st="Om Kumar";
    // gets(s);
    // puts(s);
    //char *ptr ="Om";       {Both are
    //char ptr[]="Om";            same}
    //strcpy(s,st); for copy string
    char s[34];
    
    printf("Enter your name :-");
    scanf("%s",s);
    printf("Your name is %s",s);
    
    return 0;
}