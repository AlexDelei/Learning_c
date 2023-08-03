#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 98; i++)
    {
        int fdt = i / 10;
        int sdt = i % 10;
        for (j = i +1; j <= 99; j++)
        {
            int fdt2 = j / 10;
            int sdt2 = j % 10;

            putchar('0' + fdt);
            putchar('0' + sdt);
            putchar(' ');
            putchar('0' + fdt2);
            putchar('0' + sdt2);

            if (i != 98 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}