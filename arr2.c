#include <stdio.h>

/*Printing the largest and the second largest number in array*/

int main()
{
    int arr[100], i, n, lgt, s_lgt;

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enetr the elements of the array : ");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    lgt = arr[0];
    s_lgt = arr[1];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > lgt)
        {
            s_lgt = lgt;
            lgt = arr[i];
        }
        else if (arr[i] > s_lgt && arr[i] != lgt)
        {
            s_lgt = arr[i];
        }
    }

    printf("Largest = %d, Second largest = %d", lgt, s_lgt);
    
    return 0;
}