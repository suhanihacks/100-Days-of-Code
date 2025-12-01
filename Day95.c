//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

struct Student find_top_student(struct Student s1, struct Student s2) {
    if (s1.marks >= s2.marks) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    struct Student student_a, student_b, top_student;

    scanf("%s %f", student_a.name, &student_a.marks);
    scanf("%s %f", student_b.name, &student_b.marks);

    top_student = find_top_student(student_a, student_b);

    printf("Top Student: %s (%.2f marks)\n", top_student.name, top_student.marks);
    return 0;
}
