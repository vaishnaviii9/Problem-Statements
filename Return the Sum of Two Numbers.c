#include<stdio.h>
int sum(int m, int n)
    { int a,b;
        a=m;
        b=n;
        
      
        return  a+b;
    }
void main()
{

    int m,n,c;
    printf("\n Enter 2 numbers");
    scanf("%d %d",&m,&n);
    
   c= sum(m,n);

    printf("\n %d", c);
}
