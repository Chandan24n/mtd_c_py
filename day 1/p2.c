//accept a number from th user and check if it is evenor not

#include<stdio.h>
int main()
{
    int num = 0;
    printf("enter the number that has to be checked");
    scanf("%d",&num);
    if(num%2==0)
       printf("The given number is even");
    else
        {
        printf("the givn number is not Even");
        }
    return(0);
    
}