#include <stdio.h>

int main(void){
    int num1;
    int num2;
    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);

    if (num1 == num2) {    
        printf("num1:%d equal num2:%d\n", num1, num2);
    } else if (num1 > num2){
        printf("num1:%d greater than num2:%d\n", num1, num2);
    }else{
        printf("num1:%d less than num2:%d\n", num1, num2);
    }

}
