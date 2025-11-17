// Print the largest number and smallest number from the array

#include<stdio.h>
int main(){
    int array[]={100,500,600,400,200};
    int min=array[0];
    int max=array[0];
    for(int i=0; i<5; i++){
        if(array[i]>max){
            max=array[i];
        }
        else if(array[i]<min){
            min=array[i];
        }
    }
    printf("Largest number= %d\t",max);
    printf("Smallest number= %d\n",min);
    return 0;
}