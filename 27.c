//Print tables of 2 and 3 using 2D array
#include<stdio.h>
int main(){
    int tables[2][10];
    for(int i=1;i<=10;i++){
        printf("2 x %d = %d\n",i,i*2);
    }
    printf("END\n");
    for(int i=1;i<=10;i++){
        printf("3 x %d = %d\n",i,i*3);
    }
    return 0;
}