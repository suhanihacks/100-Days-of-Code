//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void write_data() {
    FILE *fp = fopen("employee.bin", "wb");
    struct Employee emp = {101, "John Doe", 50000.00};
    
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
}

void read_data() {
    FILE *fp = fopen("employee.bin", "rb");
    struct Employee emp_read;

    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("ID: %d, Name: %s, Salary: %.2f\n", 
           emp_read.id, emp_read.name, emp_read.salary);
}

int main() {
    write_data();
    read_data();
    return 0;
}
