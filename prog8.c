#include <stdio.h>
/*#include <stdbool.h>

int main(){
    bool x = 1 > 0;

    if (x == 1 < 0 ){

        printf("%s","This is False");
    }
    else{
        printf("%s","This is true");
    }
    return 0;
}*/

/*#include <stdbool.h>
int main(){
    bool x[2] = {false,true};

    for (int i=0;i<2;i++){
        printf("%d",x[i]);
    }

    return 0;
}*/

/*#include <stdio.h>
typedef enum{true,false}A;

int main(){
    A x = true;

    if (x == false){
        printf("%s", "This is false");
    }
    else{
        printf("%s", "This is true");
    }
    return 0;
}*/

#include <stdbool.h>
int main(){
    bool x = true;
    bool y = false;

    printf("The value of x&&y is %d",x&&y);
    printf("\nThe value of x||y is %d",x||y);
    printf("\nThe value of !x is %d",!x);

    return 0;
}
