#include <stdio.h>

int sumofsquares(){
    int a ,b , result=0;

    printf("Enter your First number : ");
    scanf("%d",&a);
    printf("Enter your second number : ");
    scanf("%d",&b);

    result = (a*a )+ (b*b);

    printf("The sum of their squares is : %d",result);

    return 0;
}

int main(){
    sumofsquares();
    return 0;
}