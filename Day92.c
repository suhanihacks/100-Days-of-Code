//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int n = 5;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", 
               students[i].name, students[i].roll_no, students[i].marks);
    }
    
    return 0;
}
