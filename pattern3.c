/*
// this pattern
    *
   * *
  * * *
 * * * *
* * * * *

*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        int k = 1;
        for (j = 1; j <= 9; j++)
        {
            if (j <= 4 + i && j >= 6 - i && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
