#include <stdio.h>

int main(void){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    
    switch(number){
        case 2:
            printf("You entered 2\n");
            printf("You entered 2\n");
            printf("You entered 2\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("I dont't know your entered number\n");
            break;


    }

    
}
