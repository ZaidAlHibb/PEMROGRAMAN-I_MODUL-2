#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (a - b) * (i / j) - (x + y);

    printf("\n%.3f", hasil);

    return 0;
}