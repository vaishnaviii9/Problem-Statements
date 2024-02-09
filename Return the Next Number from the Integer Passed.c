#include<stdio.h>
int Addition(int b)
    { 
        b++;
        return b;
    }
void main()
{
    int a,b;
    printf("\n Enter any number");
    scanf("%d",&b);
   
    a= Addition(b);

    printf("\n Addition is %d",a);
}
