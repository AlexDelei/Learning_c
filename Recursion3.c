#include <stdio.h>

/*Tail and non-tail recursion*/

/*This is a TAIL recursion*/
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d ", n);
    }
    return fun(n - 1);
}

int main()
{
    fun(10);
    return 0;    
}