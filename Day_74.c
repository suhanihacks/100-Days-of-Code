//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char source_name[50], dest_name[50];
    char ch;

    scanf("%s", source_name);
    scanf("%s", dest_name);

    source = fopen(source_name, "r");
    if (source == NULL) {
        printf("Source file error.\n");
        return 1;
    }

    destination = fopen(dest_name, "w");
    if (destination == NULL) {
        printf("Destination file error.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    return 0;
}
