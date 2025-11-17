//WAF to store home details of 3 people using structures
#include <stdio.h>
#include <string.h>

struct address{
    int houseno;
    int block;
    char city[50];
    char state[50];
};

int main(){
    struct address people[5];
    printf("Enter details: ");
    scanf("%d",&people[0].houseno);
    scanf("%d",&people[0].block);
    scanf("%s",&people[0].city);
    scanf("%s",&people[0].state);
   

    printf("Enter details: ");
    scanf("%d",&people[1].houseno);
    scanf("%d",&people[1].block);
    scanf("%s",&people[1].city);
    scanf("%s",&people[1].state);
    
    printf("%d, %d, %s, %s\n",people[0].houseno,people[0].block,people[0].city,people[0].state);
    printf("%d, %d, %s, %s",people[1].houseno,people[1].block,people[1].city,people[1].state);
    return 0;
}