//WAP to calculate the electricity bill upto 2 decimal numbers based on the total number of units consumed

#include <stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter units used:");
    scanf("%d",&units);

    if(units<=100){
         bill=units*1.5;
         printf("%.2f",bill);
    }

    else if(units<=200){
         bill=units*2.0;
         printf("%.2f",bill);
    }

    else if(units<=300){
         bill=units*2.5;
         printf("%.2f",bill);
    }

    else if(units<=400){
         bill=units*3.0;
         printf("%.2f",bill);
    }

    else{
        bill=units*3.5;
        printf("%.2f",bill);
    }
}