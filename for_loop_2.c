// WAP to print numbers from 0 to 5 by incrementing by 0.5

#include<stdio.h>
int main(){
    float i;
    for(i=0;i<=5;i=i+0.5){
        printf("%.1f\n",i);
    }
    return 0;
}

// WAP to print alphabets from a to z

#include<stdio.h>
int main(){
    char alphabets;
    for(alphabets='a';alphabets<='z';alphabets++){
        printf("%c\n",alphabets);
    }
    return 0;
}

// WAP to print alphabets from A to Z

#include<stdio.h>
int main(){
    char alphabets;
    for(alphabets='A';alphabets<='Z';alphabets++){
        printf("%.c\n",alphabets);
    }
    return 0;
}
