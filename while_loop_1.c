// Print the numbers from 0 to n, if n is given by the user
#include<stdio.h>
int main(){
    
    int i=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;

}

// do while loop

#include<stdio.h>
int main(){
    
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    } while(i<5);
    
    return 0;

}