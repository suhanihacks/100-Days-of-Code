//Use malloc() to allocate structure memory dynamically and print details.#include <stdio.h>
#include <stdlib.h>

struct Data {
    int value;
    char name[20];
};

int main() {
    struct Data *dptr;
    dptr = (struct Data *)malloc(sizeof(struct Data));

    if (dptr == NULL) {
        return 1;
    }

    scanf("%d %s", &dptr->value, dptr->name);

    printf("Value: %d\n", dptr->value);
    printf("Name: %s\n", dptr->name);

    free(dptr);
    return 0;
}
