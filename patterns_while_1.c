//  Print the pattern using while loop, number of rows will be decied by user
//  *
//  **
//  ***
//  ****
#include<stdio.h>
int main(){
    int i=1,j,n;
    printf("Enter n:");
    scanf("%d",&n);

    while(i<=n){
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}


//  Print the pattern using for loop, number of rows will be decied by user
// ****
// ***
// **
// *

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n:");
    scanf("%d",&n);

    i=n;
    while(i>=1){
        j=i;
        while(j>=1){
            printf("*");
            j--;
        }
        printf("\n");
        i--;
    }
}

// Print the patter using while loop, number of rows will be decided by user
//    *
//   **
//  ***
// ****

#include<stdio.h>
int main(){
    int i=1,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    while(i<=n){
        j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
    }
