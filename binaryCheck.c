#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isBinary(int n)
{
    while(n)
    {
        if((n%10)!=0&&(n%10)!=1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("%d",isBinary(121));
    return 0;
}
