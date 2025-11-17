//Guess the number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, compnum;
    int attempts=2;
   
    for(int i=1; i<=attempts; i++){
        printf("Enter number between 1 to 10: ");
        scanf("%d",&number);

    srand(time(0));
    compnum=(rand()%10)+1;
    if(number==compnum){
        printf("You are right\n");
    } 
    else{
        printf("you are wrong\n");
    }
    
}
printf("Computer number is %d",compnum);


}