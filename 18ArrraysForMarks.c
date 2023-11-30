#include<stdio.h>

int main(){
    int s,m;
    printf("Enter no of students \n");
    scanf("%d",&s);
    printf("Enter no of subjects \n");
    scanf("%d",&m);
    int ma[s][m];
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter marks of Student %d in Sub %d :-",i+1,j+1);
            scanf("%d",&ma[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n*******************************\n\n\n\n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Marks of Student %d in Sub %d is %d \n",i+1,j+1,ma[i][j]);
        }
        printf("\n");
    }
    return 0;
}