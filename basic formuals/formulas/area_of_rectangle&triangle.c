#include <stdio.h>

int main() {
    float length, width, base, height;
    float areaRectangle, areaTriangle;

    // Calculate area of Rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    areaRectangle = length * width;
    printf("Area of Rectangle = %.2f\n", areaRectangle);

    // Calculate area of Triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    areaTriangle = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", areaTriangle);

    return 0;
}
