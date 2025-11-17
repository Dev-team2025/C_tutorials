//WAP to take the temp as input from the user and print the weather status

#include<stdio.h>
int main(){
    float temp;
    printf("Enter temp:");
    scanf("%f",&temp);

    if(temp<0){
        printf("Freezing");
    }

    else if(temp<20){
        printf("Cold");
    }

    else if(temp<30){
        printf("Warm");
    }

    else if(temp<40){
        printf("Hot");
    }

    else{
        printf("Very hot");
    }
}