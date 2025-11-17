//WAP to enter price of 3 items and print their final cost with gst

#include <stdio.h>

int main(){
    float price[3];
    float total =0;
    printf("Enter price of first product : ");
    scanf("%f",&price[0]);

   // printf("Enter price of second product : ");
    scanf("%f",&price[1]);

   // printf("Enter price of third product : ");
    scanf("%f",&price[2]);
    
    int sum= price[0]+price[1]+price[2];
    total= sum+sum*0.18;
    printf("total price with gst = %.2f\n", total);
    return 0;
}