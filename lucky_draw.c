//Lucky draw game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    printf("enter number of participants: ");
    scanf("%d",&n);

    char names[n][20];
    printf("Enter names: ");
    for(int i=0; i<n; i++){
        scanf("%s",names[i]);
    }
    srand(time(0));
    int index= rand()%n;
    printf("Winner is %s",names[index]);
}