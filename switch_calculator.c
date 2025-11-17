// WAP to perform basic arithematic operations based on users choice using switch statement

#include<stdio.h>
int main(){
    int a,b,total;
    char op;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("Enter operator:");
    scanf(" %c",&op);

    switch(op){
        case '+': total=a+b;
                 printf("Total:%d",total);
                 break;

        case '-' :total=a-b;
                 printf("Total:%d",total);
                 break;

        case '*': total=a*b;
                 printf("Total:%d",total);
                 break;

        case '/': total=a/b;
                 printf("Total:%d",total);
                 break;

        default: printf("Invalid operation\n");
                 printf("Please enter +,-,*,/");
    }
    return 0;
}