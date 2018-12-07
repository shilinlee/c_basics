 #include <stdio.h>
                
int main(void){
    int loopcount=0;
    int hotdogs;
    int total=0;
    int average;
    int counter=1;
        
    while(loopcount < 5){
        printf("Enter number of dogs ate:");
        scanf("%d", &hotdogs);
        total = total + hotdogs;
        loopcount++;
    }
    average = total / 5;
    printf("Average number of dogs was %d, total:%d\n", average, total);
    
 
    for(counter=1; counter<20; counter++){
        printf("%d\n", counter);
    }

        
}    
  
