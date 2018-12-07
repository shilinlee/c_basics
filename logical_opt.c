#include <stdio.h>

int main(void){
    int eyes;
    int toes;

    printf("Enter number of eyes and toes:");
    scanf("%d%d", &eyes, &toes);

    if (eyes == 2 && toes == 10){
        printf("You are normal\n");
    }else if (eyes == 2 || toes == 10){
        printf("You are also normal\n");
    }else{
         printf("You are wired\n");
    }

}