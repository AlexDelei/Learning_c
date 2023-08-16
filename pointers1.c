/*Pointer Arithmetics*/
/*Following Pointer arithmetic are possible
Increment 
Decrement 
Addition
Subtraction
Comparison
*/

/*Increment*/
#include <stdio.h>

/*int main()
{
    int num = 5;
    int *p;

    p = &num;
    printf("Address of Variable p is: %p", &p);
    p = p + 1;
    printf("Address of Variable p  After increment is: %p", &p);
    return 0;
}
*/

/*Decrement is not that different from increment the differnce is the - sign*/

/*Transversing an array using a pointer increment*/
/*#include <stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ,", *(p + i)); /* traversing an array using a pointer 
    }
}*/


/*Constant Pointer in C*/
/*A constant pointer in c cannot change the address of the variable to which it is pointing to*/
/*Syntax of a const pointer*/
/*int *const ptr;*/
/*Example in use
#include <stdio.h.

int main()
{
    int a = 1;
    int b = 2;
    int *const ptr;

    ptr = &a;
    ptr = &b;
    printf("Value of ptr is : %d", *ptr);
}

in the above code;
First we assign address of our variable 'a' to the pointer ptr
Second we assign address of our variable 'b' to the same pointer
Lastly we try to print out the vallue of our pointer

The output of our code will have the error message  "assignment of read-only variable 'ptr' , since we are changing the value of 
ou pointer which is not possible with constant pointers*/


/*C Function Pointers*/
/*The code of function always remains inside a memory, which means that the function has some address and we 
can get the address of the memory using the function pointer*/
/*Example */
#include <stdio.h>
int main()
{
    printf("Address of main() function is %p", main);
    return 0;
}
/*in the above function , the output confirms that every main() function has some address*/

/*Declaration of function pointer*/
int (*ip)(int);
/**ip is a pointer to function which returns an int value and accepts int arguement*/
float (*fp)(float);
/* *fp is a function pointer of float data type*/

/*Assigning address of a function to a function pointer*/
int (*pi)(int, int); /*Declaring a function pointer*/
int p(int, int); /*Declaring a function*/
pi = p; /*Assgning address of p to pointer function pi*/

/*Calling a function through a function pointer*/
/*Suppose we declare a function uas below*/
int p(int, int);
/*Calling our function as usual*/
result = p(a, b);
/*CAlling a function using a pointer*/
result = pi(a, b);
OR;
result = (*pi)(a, b);

/*Example 2*/
#include <stdio.h>
int add(int, int);
int main()
{
    int a, b;
    int (*P)(int, int);
    int result;

    printf("Enter two numbers :");
    scanf("%d%d", a, b);
    P = add;
    result = P(a, b);
    printf("Value after addition is : %d", result);
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}


/*Passing a function's address as arguements to other functions*/
/*We can pass the function's address as an argument to other functions in the same way we send other arguments to the function*/
/*i.e..
void func1(void (*p)())
*/

/*Array of Function pointers*/
/*in array of function pointers , array takes address of different functions and the  appropriate function
will be called using index i.e ...*/
#include <stdio.h>
float add(float, int);
float sub(float, int);
float mul(float, int);
float div(float, int);
int main()
{
    float x; /*Variable Declaration */
    int y;

    float (*p[4])(float, int); /*Function pointer declaration*/
    /*Assgining addresses to the elements of an array  of function pointer*/
    p[0] = add;
    p[1] = sub;
    p[2] = mul;
    p[3] = div;

    printf("Enter values of x and y :");
    scanf("%f%d", &x, &y);
    /*Calling the functions*/
    float r;
    r = (*p[0])(x, y);
    printf("The sum of x and y is: %f", r);

    r = (*p[1])(x, y);
    printf("The difference of x and y is: %f", r);

    r = (*p[2])(x, y);
    printf("The multiple of x and y is: %f", r);

    r = (*p[3])(x, y);
    printf("The div of x and y is: %f", r);
    return 0;
}
/*Functions*/
float add(float x, int y)
{
    float a;
    a = x + y;
    return a;
}
float sub(float x, int y)
{
    float a;
    a = x - y;
    return a;
}
float mul(float x, int y)
{
    float a;
    a = x * y;
    return a;
}
float div(float x, int y)
{
    float a;
    a = x / y;
    return a;
}
/*In the above code
we have created an array of function pointers that contains their addresses
After storing ,
we call the function using the function pointers
*/