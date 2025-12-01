//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int n = 5;
    int highest_index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    printf("Highest Marks Student:\n");
    printf("Name: %s, Marks: %.2f\n", 
           students[highest_index].name, students[highest_index].marks);
    
    return 0;
}
