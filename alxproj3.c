#include <stdio.h>

int main(){
    int numbers[10];
    int i, result = 0;

    printf("Enter ten numbers : ");

    for (i =0 ;i < 10;i++){
        scanf("%d",&numbers[i]);
        result += numbers[i];

        if (numbers[i] < 0){
            printf("a negative number was identified and calculation ceased : %d",result);
            return 0;
        } 
    }
    printf("The sum of all the numbers is : %d",result);
    
}