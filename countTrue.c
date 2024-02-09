#include<stdio.h>
#include<stdbool.h>  
int countTrue(bool str[])
{ 
     int count; bool a=true;
    for(int i=0;i<=4;i++)
    {
        if(str[i]==a)
        {
            count++;
        }
    }
    return count;
}
void main()
{ 
    bool a=true;
    bool b=false;
   int count2;
    
    bool str[]={true,true,false,true};
    
    count2= countTrue(str);
    printf("\n Number of true: %d",count2);
}
