#include <stdio.h>
#include <math.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main(void) {
    int a, b, c;
    long double x1, x2, x;
    int num_r;
    long long int d;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("-1");
    }
    else if (a == 0) {
        x = (long double)(-c) / (long double)b;
        num_r = 1;
        printf("%d\n%.4Lf", num_r, x);
    }
    else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            printf("0");
        }
        else if (d == 0) {
            x = (long double)(-b) / (2.0 * a);
            num_r = 1;
            printf("%d\n%.4Lf", num_r, x);
        }
        else {
            x1 = (-b + sqrtl(d)) / (2.0 * a);
            x2 = (-b - sqrtl(d)) / (2.0 * a);
            num_r = 2;
            printf("%d\n%.4Lf\n%.4Lf", num_r, MIN(x1, x2), MAX(x1, x2));
        }
    }

    return 0;
}