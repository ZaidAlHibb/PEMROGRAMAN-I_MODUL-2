#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float keliling, luas;

    scanf("%f %f", &a, &b);

    c = sqrtf(b * b - a * a);

    keliling = a + b + c;
    luas = 0.5f * c * a;

    printf("\nAlas = %g cm", c);
    printf("\nTinggi = %g cm", a);
    printf("\nKeliling = %g cm", keliling);
    printf("\nLuas = %g cm^2", luas);

    return 0;
}