#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //declare variables
    float d;
    int c, n;
    
    printf("O hai! ");
    
    do
    {
        printf("How much change is owed?: ");
        d = GetFloat();
    }
    while (d < 0);
    
    c = round(d * 100);
    n = 0;
    
    for( ; c >= 25; c = c - 25)
    {
        n = n + 1;
    }
    
    for( ; c >= 10; c = c - 10)
    {
        n = n + 1;
    }
    
    for( ; c >= 5; c = c - 5)
    {
        n = n + 1;
    }
    
    for( ; c >= 1; c--)
    {
        n = n + 1;
    }
    
    printf("%i\n", n);
}