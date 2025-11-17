//Print sum of first n natural numbers
#include<stdio.h>
int sum(int num);

int sum(int num){
    if(num==1){
        return 1;
    }
    int result = sum(num-1)+num;
    return result;
}

int main(){
    int result= sum(4);
    printf("Sum is %d",result);
    return 0;

}

