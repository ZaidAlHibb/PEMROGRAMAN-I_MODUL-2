#include <stdio.h>

int main() {
    float a, b;
    float volume, luas, keliling;
    const float PI = 3.142857f;

    scanf("%f %f", &a, &b);

    volume = PI * (a * a) * b;
    luas = 2 * PI * a * (a + b);
    keliling = 2 * PI * a;

    printf("\nVolume = %.2f", volume);
    printf("\nLuas = %.2f", luas);
    printf("\nKeliling = %.2f", keliling);

    return 0;
}