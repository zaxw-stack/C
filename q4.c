#include <stdio.h>

float calc_Area(float r) {
    float area;
    area = 3.14 * r * r;
    return area;
}

int main() {
    float radius, result;

    printf("Enter radius: ");
    scanf("%f", &radius);

    result = calc_Area(radius);
    printf("Area = %.2f\n", result);

    return 0;
}