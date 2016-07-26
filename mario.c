#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // create height and width
    int h, w;
    
   // get a height
    do
    {
        printf("Height: ");
        h = GetInt();
    }
    while (h<0 || h>23);
    
    // define the width
    w = h + 1;
    
    // rows loop
    for(int r = 1; r <= h ; r++)
    {
       // columns loop
       for(int c = 1; c <= w; c++)
       {
        if(c < (w - r))
            printf(" ");
        else
            printf("#");
       }
        
        printf("\n");
       
    }
}