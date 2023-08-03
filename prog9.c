#include <stdio.h>

int func()
{
   static int count = 0;
    count++;
    return count;

}
int main()
    {
    
    printf("%d",func());
    printf("\n%d",func());

    return 0;
    }


