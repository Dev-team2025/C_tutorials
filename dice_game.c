// 2 player dice game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    char player1[20]; 
    char player2[20];
    int roll_1, roll_2;
    srand(time(0));
    printf("Enter player 1 name: ");
    scanf("%s",player1);
    printf("Enter player 2 name: ");
    scanf("%s",player2);

    roll_1= (rand()%6)+1;
    roll_2= (rand()%6)+1;
   
    printf("%s got %d\n",player1,roll_1);
    printf("%s got %d\n",player2,roll_2);

    if(roll_1>roll_2){
        printf("%s wins",player1);
    }
    else if(roll_1<roll_2){
        printf("%s wins",player2);
    }
    else if(roll_2==roll_1){
        printf("Match draws");
    }
    return 0;
}