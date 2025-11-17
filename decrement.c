// Post dencrement operator

#include<stdio.h>
int main(){
    int i=3;
    
    printf("%d\n", i--); // use, then decrease
    printf("%d", i);
    return 0;
}

// Pre dencrement operator

#include<stdio.h>
int main(){
    int i=3;
    
    printf("%d\n", --i); // decrease, then use
    printf("%d", i);
    return 0;
}
