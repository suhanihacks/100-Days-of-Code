//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is EQUILATERAL.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is ISOSCELES.\n");
    } else {
        printf("The triangle is SCALENE.\n");
    }

    return 0;
}
