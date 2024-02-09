#include<stdio.h>
int CircuitPower(int voltage, int current)
    { 
     
    return voltage*current;
        
    }
    
void main()
{
    int voltage,current, power;
    printf("\n Enter voltage and current");
    scanf("%d %d",&voltage, &current);
   
    power= CircuitPower(voltage,current);

    printf("\n power is %d",power);
}
