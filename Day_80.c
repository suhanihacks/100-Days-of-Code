//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void write_records(int n) {
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) exit(1);
    
    for (int i = 0; i < n; i++) {
        struct Student s;
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    
    fclose(fp);
}

void read_records() {
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL) exit(1);
    
    struct Student s;
    printf("--- Stored Records ---\n");
    
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll, s.marks);
    }
    
    fclose(fp);
}

int main() {
    int num_students;
    scanf("%d", &num_students);

    write_records(num_students);
    read_records();

    return 0;
}
