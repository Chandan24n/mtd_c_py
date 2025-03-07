#include<stdio.h>

int main()
{
    int a = 3, b = 2, c = -8;
    if(a <= b++ && ++b != c)
       puts("Tadiandamol");
    else 
       puts("Pushpagiri");
       printf("%d %d %d\n", a, b, c);
       return(0);
}