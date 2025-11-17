//Print 2 functions: One to say Hello and other to say Good bye
#include<stdio.h>

//declaration
void hii();
void bye();

//defination
void hii(){
    printf("Hii\n");
}
void bye(){
    printf("Good Bye\n");
}

//call
int main(){
    hii();
    bye();
    return 0;
}