#include<stdio.h>

int main(){
    FILE *f;
    int r;
    printf("Enter the No. for table :");
    scanf("%d",&r);
    f= fopen("Table.txt","w");
    fprintf(f,"******************************************************************\n");
    fprintf(f,"The table of %d is : \n\n",r);

    for (int  i = 0; i < 10; i++)
    {
        fprintf(f,"%d X %d = %d \n",r,(i+1),r*(i+1));
    }
    fclose(f);
    return 0;
}