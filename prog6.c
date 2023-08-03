#include <stdio.h>

int main(){
    int sum = 0;
    char name[20];
    int i = 0;

    printf("Enter a name :");
    scanf("%s",name);
    
    while (name[i] != '\0')
    {
        printf("\n The ASCII value of the character %c is %d",name[i],name[i]);
        sum = sum + name[i];
        i++;
    }
    
    printf("\nThe sum of the ASCII values in the name is %d",sum);
    return 0;
}