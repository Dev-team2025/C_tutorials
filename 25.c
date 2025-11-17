//Count the odd numbers and even numbers in the array

#include<stdio.h>
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int even=0,odd=0;
    for (int i=0;i<n;i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Odd = %d\n",odd );
    printf("Even = %d",even );
    return 0;
}
