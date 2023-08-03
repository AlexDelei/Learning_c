#include <stdio.h>

int main(){
    int x=0,y=0,result = 0;

    printf("Enter Your First Number:");
    scanf("%d",&x);
    printf("Enter Your Second Number:");
    scanf("%d", &y);

    result = x+y;
    
    printf("The Sum Of these two numbers is:%d",result);

    return 0;

}