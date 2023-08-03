#include <stdio.h>

/*Two dimensional arrays*/

int main()
/*{
    int i= 0, j = 0;
    int arr[4][3] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d\n", i,j, arr[i][j]);
        }
    }
    return 0;
}*/

{

/*Storing Elements in a matrix and printing it*/
    int a[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Printing the Elements -----\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}
