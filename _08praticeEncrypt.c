#include<stdio.h>
void en(char *c){
    char *ptr =c;
    while (*ptr!='\0'){
        *ptr = *ptr +1;
        ptr++;
    }
}
void de(char *c){
    char *ptr =c;
    while (*ptr!='\0'){
        *ptr = *ptr -1;
        ptr++;
    }
}
int main(){
    char c[125];
    int k;
    printf("Enter the no :-");
    scanf("%d",&k);
    if (k!=11)
    {
        printf("Enter message to encryept :");
        scanf("%s",c);
        en(c);
        printf("Encrypted string is %s",c);
    }
    else
    {
        printf("Enter message to decryept :");
        scanf("%s",c);
        de(c);
        printf("decrypted string is %s",c);
    }
    return 0;
}