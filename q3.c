#include <stdio.h>

int main() {
    int n, i;
    int count = 0;
    float marks[50];
    float sum = 0, avg, min;

    printf("How many students? ");
    scanf("%d", &n);

    // get marks
    for (i = 0; i < n; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    avg = sum / n;

    // find lowest
    min = marks[0];
    for (i = 0; i < n; i++) {
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    // count those below average
    for (i = 0; i < n; i++) {
        if (marks[i] < avg) {
            count++;
        }
    }

    printf("Average = %.2f\n", avg);
    printf("Lowest = %.2f\n", min);
    printf("Number below average = %d\n", count);

    return 0;
}