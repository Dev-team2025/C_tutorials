//WAP to print multiplication table of a number using for loop

#include<stdio.h>
int main(){
    int num;
    int i;
    printf("Enter a num:");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,i*num);
    }
    return 0;

}
