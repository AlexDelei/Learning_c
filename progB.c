#include <stdio.h>

int main() {
    int num;

    printf("Enter a number and I will tell you if its an even or odd : ");
    scanf("%d",&num);

    if ( num%2 == 0){
        printf("%s", "This is an even number");
    }
    else{
        printf("%s", "This is an odd number");
    }

    return 0;
}