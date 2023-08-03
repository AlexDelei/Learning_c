#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);

    if ( a > b && b > c){
        printf("The order of the numbers is %d %d %d",c,b,a);
    }
    if ( a > c && c > b){
        printf("The order of the numbers is %d %d %d",b,c,a);
    }
    if ( b > a && a > c ){
        printf("The order of the numbers is %d %d %d",c,a,b);
    }
    if ( b > c && c > a ){
        printf("The order of the numbers is %d %d %d",a,c,b);
    }
    if ( c > a && a > b ){
        printf("The order of the numbers is %d %d %d",b,a,c);
    }
    if ( c > b && b > a ){
        printf("The order of the numbers is %d %d %d",a,b,c);
    }
 
}