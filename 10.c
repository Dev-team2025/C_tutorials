//Write a function to calculate percentage of a student from marks in 3 subjects

#include <stdio.h>
float percentage(float a, float b, float c);

float percentage(float a, float b, float c){
    float sum=(a+b+c);
    float total=sum/300*100;
    return total;
}

int main(){
    int a=89,b=99,c=60;
    float total=percentage(a,b,c);
    printf("Total percentage is %.2f",total);
    return 0;
}