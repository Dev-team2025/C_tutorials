/*Using nested if else WAP to take input of age and gender of a person and print whether 
  the person is adult or minor and also male or female*/

#include<stdio.h>
int main(){
    int age;
    char gender;

    printf("Enter age:");
    scanf("%d",&age);

    printf("Enter the gender:");
    scanf(" %c",&gender);

    if(age>=18){
        printf("Adult\n");
        if(gender=='m' || gender=='M'){
            printf("The person is adult male\n");
        }
        else if(gender=='f' || gender=='F'){
            printf("The person is adult female\n");
        }
        else{
            printf("Gender input is invalid\n");
        }
    }
    else{
        printf("Minor\n");
        if(gender=='m' || gender=='M'){
            printf("The person is minor male\n");
        }
        else if(gender=='f' || gender=='F'){
            printf("The person is minor female\n");
        }
        else{
            printf("Gender input is invalid\n");
        }
    }
}
