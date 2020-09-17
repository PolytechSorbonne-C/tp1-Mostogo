#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p;
    for(i=1;i<100;i++)
    {
        if((!(i%3))&&(!(i%7)))
        {
            printf("FizzBuzz ");
        }
        else if(!(i%3))
        {
            printf("Fizz ");
        }
        else if(!(i%7))
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ",i);
        }
    }
    return 0;
}
