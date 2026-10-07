#include <stdio.h>

int main() {
    float c, f, k;

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("-----------------------------------------\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("%.2f C\t\t%.2f F\t\t%.2f K\n", c, f, k);
    }

    return 0;
}