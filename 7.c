//Write functions to calculate area of square, circle and rectangle
#include<stdio.h>

int square(int side);
float circle(float radius);
int rectangle(int a, int b);

int square(int side){
    side=side*side;
    printf("Area of square = %d\n",side);
}
float circle(float radius){
    radius=3.14*radius*radius;
    printf("Area of circle = %.2f\n",radius);
}
int rectangle(int a, int b){
    int area =a*b;
    printf("Area of rectangle = %d\n",area);
    return area;
}

int main(){
    int side,a,b;
    float radius;
    printf("Enter side of square: ");
    scanf("%d",&side);
    square(side);

    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    circle(radius);

    printf("Enter sides a and b: ");
    scanf("%d %d",&a,&b);
    rectangle(a,b);

    return 0;
}

