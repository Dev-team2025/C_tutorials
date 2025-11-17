// Print sum of first n natural numbers using while loop, take n from user
// Print the numbers in reverse using 1 more while loop
// (Do the same using one for loop)

#include<stdio.h>
int main(){
    
    int i=1,n;
    int sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("The sum is: %d\n",sum);

    int j=n;
    while(j>=1){
        printf("%d\n",j);
        j--;
    }
    
    return 0;

}