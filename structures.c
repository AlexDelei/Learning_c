/*What is Structure in C*/
/*Structure is user-defined data type that enables us to store the collection of different data types*/
/*Each member of a structure is called a member*/
/*struct keyword is used to define the structure*/
/*structure sytax ...*/
/*struct structure_name
{
    data_type  member1;
    data_type  member2:
    data_type  member3;
    .
    ..
    ...
    data_type memberN;
};
*/

/*Another ONE!!*/
/*struct employees
{
    int id;
    char name[20];
    float salary;
};
*/

/*Declaring Structure Variables*/
/*There are two ways for declaring 
1. */
/*struct employees
{
    int id;
    char name[20];
    float salary;
};
struct employee e1, e2; /* Should be declared inside the main function*/

/*
2. */
/*struct employees
{
    int id;
    char name[20];
    float salary;
}e1, e2;
*/


/*Best Approach*/
/*If the number of variables are not fixed , use the first approach
It provides the best best flexibility to declare structure variables many times */

/*If the no. of variables are fixed ,use the second approach
It saves your code to declare a variable in main() function*/

/*Accessing members of the structure*/
/*There are two ways to access
1. by . (member or dot operator)
2. by -> (structure pointer operator)
*/
/*Example 1*/
/*#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
}e1; /*declaring the e1 variable for structure*/
/*int main()
{
    /*Storing First Employee information
    e1.id = 101;
    strcpy(e1.name, "Alex Delei"); /*Copying string  into char array 
    /*Printing the employee info
    printf("Employee 1 id : %d\n", e1.id);
    printf("Employee 1 name: %d", e1.name);

    return 0;
}
*/

/*More Example*/
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
    float salary;
}e1, e2; /*declaring e1 and e2 variables for structure*/
int main()
{
    /*store First employee information*/
    e1.id = 200;
    strcpy(e1.name, "Cheplagat kipkip");
    e1.salary = 50000;

    /*Storing second employee information*/
    e2.id = 423;
    strcpy(e2.name, "Westly Wills");
    e2.salary = 56000;

    /*Printing first employee details*/
    printf("Employee 1 id : %d", e1.id);
    printf("\nEmployee 1 name : %s", e1.name);
    printf("\nEmployee 1 salary : %f\n\n", e1.salary);

    /*Printing the second employees details*/
    printf("Employee 2 id : %d\n", e2.id);
    printf("Employee 2 name : %s\n", e2.name);
    printf("Employee 2 salary : %2f\n", e2.salary);
}
