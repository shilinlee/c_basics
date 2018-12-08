#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int i=0;
    srand(12); // seed: 12
    while(i < 15){
        printf("%d\n", rand());
        i++;
    }
    printf("----------\n");
    i = 0;
    srand(time(NULL)); // make the number truly rand
    while(i < 15){
            printf("%d\n", rand());
            i++;
    }
    return 0;
}