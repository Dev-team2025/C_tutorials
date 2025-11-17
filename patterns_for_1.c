//  Print the pattern using for loop, number of rows will be decied by user
//  *
//  **
//  ***
//  ****

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}


//  Print the pattern using for loop, number of rows will be decied by user
// ****
// ***
// **
// *

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++){       
        for(j = 1; j <= n-(i-1); j++){   
            printf("*");     
        }
        printf("\n");  
    } 
    return 0;
}

// Print the patter using for loop, number of rows will be decided by user
//    *
//   **
//  ***
// ****

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

//****
// ***
//  **
//   * 
#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=1;k<=n-(i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}