#include <stdio.h>

void odd();
void even();
int n =1;

/*
*odd - prints odd numbers + 1
*r
*/
void odd()
{
  if (n <= 10)
  {
    printf("%d ", n + 1);
    n++;
    even();
  }
  return;
}
/*
*even - prints even numbers - 1
*/
void even()
{
    if (n <= 10)
    {
        printf("%d ", n -1);
        n++;
        odd();
    }
    return;
}
/*
*main - holds the function and calls it
*/
int main()
{
    odd();
}