/*WAP to check the entered number is Armstrong number
  153= 1^3 + 5^3 + 3^3 (each digit should be powered with total no. of digits and add all of them)  */

#include<stdio.h>
#include<math.h>

int main(){
    int d1,d2,d3,original;
    int total;
    printf("Enter the digits seperately :");
    scanf("%d %d %d",&d1, &d2, &d3);

    total=pow(d1,3)+pow(d2,3)+pow(d3,3);
    original=d1*100 + d2*10 + d3;
    if(original==total){
        printf("This is Armstrong number\n");
    }
    else{
        printf("This is not Armstrong number\n");
    }
}