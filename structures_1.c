//WAP to store data of 2 students in which 1 student's data has to be given as input and the other in the code
#include <stdio.h>
#include <string.h>
//define
struct student {
    char name[100];
    int rollno;
    float cgpa;
};
int main(){
    struct student s1;
    printf("Enter rollno of student: ");
    scanf("%d",&s1.rollno);
    printf("Enter cgpa of student: ");
    scanf("%f",&s1.cgpa);
    getchar();
    printf("Enter name of student: ");
    fgets(s1.name,100,stdin);
    
    printf("%s%d\n%f\n",s1.name,s1.rollno,s1.cgpa);

    struct student s2;
    s2.rollno=21;
    s2.cgpa=8.1;
    strcpy(s2.name,"Sahana");
    printf("%s\n%d\n%f\n",s2.name,s2.rollno,s2.cgpa);

}


