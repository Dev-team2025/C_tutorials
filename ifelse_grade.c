//WAP to test if,else if and else statements

#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks>90){
        printf("A grade");
    }

    else if(marks<90 && marks>70){
        printf("B grade");
    }

    else if(marks<70 && marks>50){
        printf("C grade");
    }

    else{
        printf("Average");
    }
}

