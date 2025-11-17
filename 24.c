//Traverse in array
//Take input of 5 numbers and give the output using array as pointer

#include <stdio.h>
int main(){
    int numbers[5];
    int *ptr=&numbers[0];
    // input
    for(int i=0; i<5; i++){
        printf("%dth index : ",i);
        scanf("%d",&numbers[i]);
    }
    printf("INPUT COMPLETED\n");
    // output
    for(int i=0; i<5; i++){
        printf("%dth index : %d\n",i,numbers[i]);
    }
    printf("OUTPUT COMPLETED\n");
    return 0;
}
