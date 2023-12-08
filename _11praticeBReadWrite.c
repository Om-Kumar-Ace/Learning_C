#include<stdio.h>

int main(){
    FILE *f1;
    FILE *f2;
    
    f1= fopen("Note.txt","r");
    f2= fopen("Sample.txt","w");
    char c = fgetc(f1);
    while (c!=EOF)
    {
        fputc(c,f2);
        c=fgetc(f1);
    }
    
    
    fclose(f1);
    fclose(f2);
    return 0;
}