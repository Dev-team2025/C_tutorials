//Add a new element at the end of an array
#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int new=6;

    array[n]=6;
    n++;

    printf("Updated array:\t");
    for(int i=0;i<n;i++){
        printf("%d\t", array[i]);
    }
    return 0;
}