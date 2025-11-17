/*WAP to check the eligibilty for blood donation
  Condtions: Above 18 years, Above 50kg */

#include <stdio.h>

int main() {
    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    if (age >= 18 && weight >= 50) {
        printf("You are eligible to donate blood.\n");
    }
    else if(age>=18 && weight<50){
        printf("Age is ok but weight is not ok");
    }
    else if(age<18 && weight>=50){
        printf("Weight is ok but age is not ok");
    }
    }
        // if (age < 18) {
        //     printf("You are not eligible: Age must be 18 or above.\n");
        // }
        // if (weight < 50) {
        //     printf("You are not eligible: Weight must be 50kg or more.\n");
        // }
//     }

//     return 0;
// }

  