#include <stdio.h>

int main(void)
{
    int n, m;

    for (n = 48; n <= 56; n++)
    {
        for (m = 49; m <= 57; m++)
        {
            if (n < m)
            {
                putchar(n);
                putchar(m);

                if (n != 56 || m != 57)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}