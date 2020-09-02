#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, loop1, loop2, x = 1, sp;
    scanf("%d", &num);
    sp = num - 1;
    if (num < 1 || num>100)
    {
        printf("ERROR");
    }
    else
    {
        for (loop1 = 0; loop1 < num; loop1++)
        {
            for (loop2 = 0; loop2 < sp; loop2++)
            {
                printf(" ");
            }
            for (loop2 = 0; loop2 < x; loop2++)
            {
                if (loop2 == 0 || loop2 == x - 1 || loop1 == num - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }

            }
            printf("\n");
            x += 2;
            sp--;
        }
    }

    return 0;
}
