#include<stdio.h>
int main()
{
    float principal,rate,time;
    printf("Enter the value of Principal\n");
    scanf("%f",&principal);
    printf("Enter the value of Rate\n");
    scanf("%f",&rate);
    printf("Enter the value of time\n");
    scanf("%f",&time);
    printf("The value of interest is %f",(principal*rate*time)/100);
    
    return 0;

}