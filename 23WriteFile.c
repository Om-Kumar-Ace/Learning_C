#include<stdio.h>

int main(){
    FILE *f;
    int r;
    char c[120];
    printf("Enter Point No. :");
    scanf("%d",&r);
    printf("Enter The Note :");
    scanf("%s",c);
    f= fopen("Note.txt","w");
    fprintf(f,"%d \n",r);
    fprintf(f,"%s \n",c);
    
    fclose(f);
    return 0;
}