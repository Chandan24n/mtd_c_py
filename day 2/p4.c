#include<stdio.h>
#include<math.h>

int main()
{
    int averagescore = 0;
    puts("Enter the averag score of the student toprint the result");
    scanf("%d", &averagescore);
    if(averagescore >= 0 && averagescore <= 49)
       puts("Result is Fail");
    else if(averagescore >= 50 && averagescore <=70)
    puts("Result is First Class");
    else if(averagescore >= 71 && averagescore <= 90)
    puts("Result is Distinction");
    else if(averagescore >= 91 && averagescore <= 100)
    puts("Result is Topper");
    else
    puts(" Invalid Input");
    return 0;
}