#include<stdio.h>
int Convert(int b)
    { 
       b=b*60;
        return b;
    }
void main()
{
    int a,b;
    printf("\n Enter minutes to Convert");
    scanf("%d",&b);
   
    a= Convert(b);

    printf("\n Seconds is %d",a);
}
