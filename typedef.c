/*This is a keyword which functions to provide some meaningful names for already existing variables in C */ 
/*The syntax is
typedef <existing_file_name> <alias_file>
*/

/*Example in use*/
/*typedef unsigned int unit;
Now instead of writing 'unsigned int a, b;'
It will be  'unit a, b;'
*/

/*typedef keyword as seen provides a shortcut  by providing an alternative name for already existing variables
It reduces the length of the code and complexity of data types*/
/*Useful when dealing with long data types and structure declaration*/

/*Code Example*/
/*#include <stdio.h>

int main()
{
    typedef unsigned int unit;
    unit i, j;
    i = 99;
    j = 98;

    printf("Value of i is %d\n: ", i);
    printf("Value of j is %d: ", j);
}

/*Using typedef with structures */
/*A good example where we typedef the structure*/
#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int age;
}stud; /*the new variable that has replaced student structure tag*/
int main()
{
    stud s1; /*Declaring the s1 variable for stud*/
    printf("Enter the students details as follows..");
    printf("\nName : ");
    scanf("%d", &s1.name);
    printf("\nAge : \n\n");
    scanf("%d", &s1.age);

    /*Printing out the results*/
    printf("Name : %s\n", s1.name);
    printf("Age : %d", s1.age);

    return 0;
}

/*typedef with pointers*/
/*Its possible to provide names or alias for pointers variables*/
/*int *ptr;
typedef int* ptr;
ptr p1, p2;
*/  