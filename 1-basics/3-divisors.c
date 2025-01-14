/*
 * Find the smallest divisor of a number
 */

#include <stdio.h>

int main()
{
    int n = 21;
    for(int k = 2; k < n; k++)
    {
        printf("Checking %i...\n", k);
        if(n % k == 0)
        {
            printf("%i is a divisor of %i\n", k, n);
            break;
        }	
    }
}