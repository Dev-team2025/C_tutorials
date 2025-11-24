#include <stdio.h>
int main(){
    int alpha=0, digits=0, spcl=0;
    char string[100];
    printf("Enter string: ");
    fgets(string,100,stdin);

    for(int i=0; string[i]!='\0'; i++){
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        alpha++;
        else if( string[i]>='0' && string[i]<='9')
        digits++;
        else if(string[i]!='\n')
        spcl++;
    }
    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d\n",spcl);
    return 0;
}