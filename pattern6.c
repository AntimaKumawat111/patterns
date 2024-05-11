//  This pattern :-
/*

ABCDCBA
ABC CBA
AB   BA
A     A

*/
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 3 + i || j <= 5 - i)
            {
                printf("%c", k);
                // printf("*");
                j < 4 ? k++ : k--;
            }

            else
            {
                printf(" ");
                if (j == 4)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}