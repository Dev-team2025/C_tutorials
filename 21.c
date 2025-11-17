// Print all the elements or an array

#include<stdio.h>
int main(){
    int array[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}

//Print all the elements of an array using pointer assuming that number of elements in the array is unknown


#include<stdio.h>
int main(){
    int array[]={2,4,6,8,10};
    int *ptr = array;
    int n = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < n; i++) {
    printf("%d ", *(ptr + i));
    }
    return 0;
}
