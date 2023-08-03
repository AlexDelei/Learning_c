#include <stdio.h>

/*int main(){
    int numb;
    printf("Enter a number : ");
    scanf("%d",&numb);

    switch (numb){
        case 15:
        printf("Your number is equal to 15");
        break;

        case 45:
        printf("Your number is equal to 45");
        break;

        case 120:
        printf("Your number is equal to 120");
        break;

        case 250:
        printf("Your number is equal to 250");
        break;

        default:
        printf("Your number is not equal to 15 , 45 , 120  or 250");
    }

    return 0;
}*/


int main (){
    int x  ,y  ;
    printf("Enter your score : ");
    scanf("%d", &x);
    printf("Enter your previous score : ");
    scanf("%d", &y);

    switch (x > y  && x + y > 0)
    {
    case 1:
    printf("Good job , You have improved");
    break;
    
    case 0:
    printf("Try to do better next time");
    break;

    default:
    printf("You have maintained");
    }

    return 0;
}