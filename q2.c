#include <stdio.h>

int main() {
    int choice;
    float l, w, r, b, h, area;
    float pi = 3.14;

    printf("Choose shape\n");
    printf("1 for rectangle\n");
    printf("2 for circle\n");
    printf("3 for triangle\n");
    printf("4 for playground (rectangle and semicircle)\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter length: ");
        scanf("%f", &l);
        printf("Enter width: ");
        scanf("%f", &w);
        area = l * w;
        printf("Area is %.2f m2\n", area);
    }
    else if (choice == 2) {
        printf("Enter radius: ");
        scanf("%f", &r);
        area = pi * r * r;
        printf("Area is %.2f m2\n", area);
    }
    else if (choice == 3) {
        printf("Enter base: ");
        scanf("%f", &b);
        printf("Enter height: ");
        scanf("%f", &h);
        area = 0.5 * b * h;
        printf("Area is %.2f m2\n", area);
    }
    else if (choice == 4) {
        printf("Enter length: ");
        scanf("%f", &l);
        printf("Enter width: ");
        scanf("%f", &w);
        r = w / 2;   // semicircle radius is half the width
        area = (l * w) + (pi * r * r / 2);
        printf("Total area is %.2f m2\n", area);
    }
    else {
        printf("Wrong choice\n");
    }

    return 0;
}