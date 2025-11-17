//WAP to find out whether the alphabet is vowel or consonant using switch statement
#include<stdio.h>
int main(){
     char alphabet;
     printf("Enter alpahabet:");
     scanf("%c",&alphabet);

     switch(alphabet){
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':printf("Vowel");
                   break;

          default: printf("Consonant");      
     }
     return 0;
}