//Swap a and b in main function

#include<stdio.h>
int swap(int a, int b);
int _swap(int *a, int *b);

int swap(int a, int b){
    int temp;
    temp=a; a= b; b=temp;
    printf("a = %d and b = %d\n",a ,b);
    return a,b;
}

int _swap(int *a, int *b){
    int temp;
    temp=*a; *a=*b; *b=temp;
    printf("a = %d and b = %d\n",*a ,*b);
    return *a,*b;
}

int main(){
    int temp,x=5,y=3;
    swap(x,y);
    printf("x = %d and x = %d\n",x ,y);
    
    _swap(&x,&y);
    printf("x = %d and x = %d\n",x ,y);
    return 0;
}