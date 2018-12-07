#include <stdio.h>

int main(void){
    int counter = 1;
    int counter2 = 12;
    do{
        printf("%d\n", counter);
        counter++;
    }while(counter < 10);

    // this loop run at least once.
    do{
        printf("%d\n", counter2);
        counter2++;
    }while(counter2 < 10);

}