#include  <stdio.h>
/*
*Factorial - Calculates the FActorial of a number n
*@n: the input number

*Return: its factorial
*/
int Factorial(int n)
{
    /*Base Case : Should Return 1 if n is  1*/
    if (n == 1)
    {
        return 1;
    }
    /*Recursive Case that repeats the process if n is not 1*/
    else
    {
        return n * Factorial(n - 1);
    }
}

/*
*main - where input comes from
*Return: 0
*/

int main()
{
    int b;
    int ans;

    printf("Enter a number to calculate its factorial : ");
    scanf("%d", &b);
    ans = Factorial(b);
    printf("The factorial of %d is : %d", b, ans);
    return 0; 
}