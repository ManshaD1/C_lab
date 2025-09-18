//WAP to check if the triangle is valid or not. If the validity is established do check if the triangle is isosceles, equilateral, rigth angle or scalene. take sides of triangle as input from a user

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter sides of a triangle");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid\n");

        // Check type
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles triangle\n");
        }
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b)) {
            printf("Right angled triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }
    else {
        printf("Triangle is not valid\n");
    }

    return 0;
}
