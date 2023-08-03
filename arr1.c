#include <stdio.h>

/*Sorting an array in descending order*/

int main(void)
{
    int i, j ,temp;
    int a[10] = {35, 20, 16, 99, 48, 58, 77, 22, 9, 5};

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Printing Sorted Elements \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d , ", a[i]);
    }
    return 0;
}