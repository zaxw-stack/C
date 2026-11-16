#include <stdio.h>

int main() {
    float a, b;

    printf("Enter price of supermarket 1: ");
    scanf("%f", &a);
    printf("Enter price of supermarket 2: ");
    scanf("%f", &b);

    // check if prices are valid
    if (a <= 0 || b <= 0) {
        printf("Price is invalid! Price must be more than 0\n");
    }
    else {
        if (a < b) {
            printf("Supermarket 1 is cheaper\n");
        }
        else if (b < a) {
            printf("Supermarket 2 is cheaper\n");
        }
        else {
            printf("Both have the same price\n");
        }
    }

    return 0;
}