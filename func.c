#include <stdio.h>

int findarea(int x, int y); // declare first

int main(void){
    int one;
    int two;

    printf("Enter number of one and two:");
    scanf("%d%d", &one, &two);

    printf("the area id %d\n", findarea(one, two));
    return 0;

}


int findarea(int x, int y){
    return x * y;
}