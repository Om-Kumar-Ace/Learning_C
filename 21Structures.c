#include<stdio.h>
#include<string.h>
struct employee {
    int i;
    float j;
    char k[40];

};

int main(){
    int a;
    float b;
    char c[40] ;
    printf("Enter Name :-");
    scanf("%s",c);
    printf("Enter Salary :-");
    scanf("%f",&b);
    printf("Enter ID :-");
    scanf("%d",&a);
    struct employee e1;
    e1.i=a;
    e1.j=b;
    strcpy(e1.k,c);


    printf("Name :- %s\n",e1.k);
    printf("ID :- %d\n",e1.i);
    printf("Salary :- %f\n",e1.j);

    
    
    return 0;
}