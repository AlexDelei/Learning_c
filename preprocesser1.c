/*The C preprocesser is a micro processer that is used by compiler to tranform your code before compilation*/
/*It allows us to add macros, that's why its callled microprocesser*/
/*All preprocesser directives start with # symbol*/

/*List of all preprocesser directives*/

/*#ifdef
#endif
#undef
#define
#if
#else
#elif
#endif
#error
#pragma
*/

/*C macros*/
/*A macro is a segment of a code which is replaced by the value of the macro*/
/*Types of C macros*/
/*object-like macros
 function-like macros
*/

/*Object-like macros*/
/*This is an identifier that is replaced by a value..i.e*/
#define PI 3.14
/*Here , PI is the macro name which will be replaced by 3.14*/

/*Function-like macro*/
/*THis looks like a function call*/
#define MIN(a , b)((a) < (b)? (a):(b));
/*MIN is the macro name*/

/*C predifined Macros*/
/*__DATE__ - represents current date in "MMM DD YY"*/
/*__FILE__ - represents current file*/
/*...and many others*/

/*#include*/
/*This is used to paste code of given file into current file 
It is used to include system-defined files and user-defined header files*/

/*#define*/
/*This preprocesser directive is used to define constants or micro substitution*/
/*Example of defining constants*/
#include <stdio.h>
#define V 3.8
int main()
{
    printf("%f", V);
}

/*defining a macro */
#include <stdio.h>
#define MIN(a, b)((a) < (b))?(a):(b)
void main()
{
     printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));
}

/*#undef*/
/*THis is used to undefine the conastant or micro that was defined by #define*/
#undef V

/*C #ifdef*/
/*Used to check if macro is defined by #define*/
/*if yes it executes the code */
#include <stdio.h>
#define INPUT
void main()
{
    int a = 0;
}
#ifdef INPUT
a = 3;
#else
printf("Enter value a: ");
scanf("%d", &a);
#endif
printf("%d", a);
getch();


/*#ifndef*/
/*Checks if macro is not defined by #define 
if yes it executes the code ohterwise #else code is execited if present*/

/*#if*/
/*this evaluates the condtion or expression*/
/*Example ..*/
#include <stdio.h>
#define NUMBER 0
void main()
{
    #if (NUMBER == 0)
    printf("Value of number is :%d", NUMBER);
    #endif
    getch();
}

/*#else*/
/*This evaluates the expression or condition if condition of #if is false*/
/*It can be used with #if, #elif, #ifef and #ifndef directives*/


/*#error*/
/*This preprocesser directive indicates an error
example..
*/
#include <stdio.h>
/*#include <math.h>*/
#ifndef __MATH_H /*checks if math.h is undefined*/
#error  First include then compile /*the error message*/
#else
void main()
{
    float b;
    a = sqrt(49);
    printf("%f", a);
}
#endif

/*#pragme*/
/*is used to add additional information to the compiler
it is used by the compiler to offer machine or operating- system feature
*/
