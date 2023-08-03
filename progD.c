#include <stdio.h>
#include <math.h>
/*void multi();
int main()
{
    printf("\nGoing to multiply two numbers: ");
    multi();
}
void multi()
{
    int a, b;
    printf("\nEnter two numbers to be multiplied: ");
    scanf("%d %d",&a, &b);
    printf("The multiple is = %d ", a*b );
}*/

/*void sum();

int main(void)
{
    printf("\n Going to calculate the area of a square.");
    float area = square();
    printf("The area of the square is : %f",area);

}
int sum()
{
    float side;
    printf("Enter the length of one side: ");
    scanf("%f",&side);
    return side*side;
}*/

void multi(int, int, int);
int main(void)
{
    int a, b, c;
    printf("Going to calculate the average of three numbers");
    printf("\nEnter the three numbers:");
    scanf("%d%d%d",&a, &b, &c);
    average(a,b,c);
}
void average(int a, int b, int c)
{
    float avg;
    avg = (a+b+c)/5;
}