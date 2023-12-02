#include<stdio.h>
int strlen(char * s ){
    char *ptr = s;
    int len= 0;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char s[]="Om_Kumar";
    int l =strlen(s);
    printf("The length of string is :- %d \n", l);
    return 0;
}