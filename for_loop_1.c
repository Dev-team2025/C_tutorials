// WAP to print the numbers from 0 to 10 using for loop

#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i=i+1){ //i+=1
        printf("%d\n",i);
    }
    return 0;
}

// WAP to print the numbers from 10 to 0 using for loop

#include<stdio.h>
int main(){
    int i;
    for(i=10;i>=0;i=i-1){ //i++
        printf("%d\n",i);
    }
    return 0;
}

// WAP to print "Hey" 100 times using for loop

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i+=1){
        printf("Hey\n");
    }
    return 0;
}