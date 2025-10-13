//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date_in[11]; 
    char date_out[15];
    char *month_abbr[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int day, month, year;

    scanf("%s", date_in);

    sscanf(date_in, "%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        sprintf(date_out, "%02d-%s-%d", day, month_abbr[month], year);
        printf("%s\n", date_out);
    } else {
        printf("Invalid month.\n");
    }

    return 0;
}
