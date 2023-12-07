#include<stdio.h>

int main(){
    FILE *p;
    int num;
    p=fopen("Sample.txt","r");
    //p=fopen("Sample.txt","w");
    fscanf(p,"%d",&num );
    printf("The value of num is %d \n",num);
    fclose(p);
    return 0;
}