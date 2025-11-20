//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char new_text[100];

    fp = fopen("existing_file.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    scanf("%[^\n]s", new_text);

    fprintf(fp, "\n%s", new_text);

    fclose(fp);
    return 0;
}
