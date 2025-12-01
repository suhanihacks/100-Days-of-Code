//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date dob;
};

int main() {
    struct Employee emp1;

    scanf("%d %s %d %d %d", &emp1.id, emp1.name, &emp1.dob.day, &emp1.dob.month, &emp1.dob.year);

    printf("Employee ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("DOB: %d/%d/%d\n", emp1.dob.day, emp1.dob.month, emp1.dob.year);
    
    return 0;
}
