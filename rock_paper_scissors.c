//Rock Paper Scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(){
    char user[20];
    printf("Enter user name: ");
    scanf("%s",user);

    char userchoice, compchoice;
    
    printf("R-Rock\nP-Paper\nS-Scissors\n");
    printf("Enter your choice: ");
    scanf(" %c",&userchoice);
    userchoice=toupper(userchoice);
    srand(time(0));

    compchoice=rand()%3;
    if(compchoice==0){
        compchoice='R';
    }
    else if(compchoice==1){
        compchoice='P';
    }
    else if(compchoice==2){
        compchoice='S';
    }
    printf("Comp choice is: %c\n",compchoice);

    if(userchoice=='R' && compchoice=='S' || userchoice=='P' && compchoice=='R' || userchoice=='S' && compchoice=='P'){
        printf("%s wins!!", user);
    }
    else if( userchoice == compchoice){
        printf("Match draws");
    }
    else{
        printf("Computer wins!!");
    }
    return 0;
}