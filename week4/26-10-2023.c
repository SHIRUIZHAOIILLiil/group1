#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Student{
    char name[20];
    char student_id[11];
    unsigned mark;
}Student;

struct Person
{
   
};


void initialize(){
    int number_student = 10;
    int a [3]= {1,2,3};
    Student students[10] = {{"name", "123", 10},{"name", "123", 9},{"name", "123", 8},{"name", "123", 7},{"name", "123", 6},{"name", "123", 5},{"name", "123", 4},{"name", "123", 3},{"name", "123",2},{"name", "123", 1}};
    for (int i =0; i<number_student;i++){
        printf("Student name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
         printf("Student mark: %u\n", students[i].mark);
    }
}

int main(){
    Student student ;
    initialize();
    struct Person person[10];
    // printf("Student mark: %u\n", student.mark);
    // printf("please input the mark");
    // scanf("%u",&student.mark);
    // strcpy(student.name, "Name Surname");
    // strcpy(student.student_id, "13902178");
    // printf("Student name: %s\n", student.name);
    // printf("Student ID: %s\n", student.student_id);
    // printf("Student mark: %u\n", student.mark);

    return 0;
}