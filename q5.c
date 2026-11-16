#include <stdio.h>

int main() {
    float sc, bd, interest, total;

    printf("Enter share contribution: ");
    scanf("%f", &sc);
    printf("Enter bank deposit: ");
    scanf("%f", &bd);

    if (sc > 100000) {
        interest = sc * 0.05;
    }
    else {
        interest = sc * 0.03;
    }

    total = sc + interest + bd;

    printf("Interest = %.2f\n", interest);
    printf("Total savings = %.2f\n", total);

    return 0;
}