#include<stdio.h>
int CalcAge(int age)
    { 
       age=age*365;
       return age;
    }
void main()
{
    int days,age;
    printf("\n Enter age in years");
    scanf("%d",&age);
   
    days= CalcAge(age);

    printf("\n Days is %d",days);
}
