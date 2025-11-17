//Create strings for firstname and lastname and print the characters using a loop
#include<stdio.h>
int main(){
    char firstname[]="SAHANA ";
    char lastname[]="ILAGER";
    
    for(int i=0;firstname[i]!='\0';i++){
        printf("%c",firstname[i]);
    }
    for(int i=0;lastname[i]!='\0';i++){
        printf("%c",lastname[i]);
    }

    return 0;
}

//Same using function
#include<stdio.h>

void Name(char array[]);

void Name(char array[]){
    
    for(int i=0; array[i] !='\0';i++){
        printf("%c",array[i]);
    }
}

int main(){
    char firstname[]="SAHANA ";
    char lastname[]="ILAGER";

    Name(firstname);
    Name(lastname);

    return 0;
}