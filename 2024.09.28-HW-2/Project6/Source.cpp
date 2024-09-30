#include <stdio.h>
#include <math.h>
#include <iostream>

int main(int argc, char* argv[])
{

    float a = 0;
    float b = 0;
    float c = 0;
    scanf_s("%f %f %f", &a, &b, &c);

    float d = b * b - 4 * a * c;
    if (a == b and b == c and c == 0) 
    {
        printf("-1");
    }
    else if (d < 0) 
    {
        printf("0");
    }
    else if (d == 0) 
    {
        printf("1 \n");
        printf("%f", -1 * b / (2 * a));
    }
    else {
        printf("2 \n");
        printf("%f \n %f", (-1 * b - sqrt(d)) / (2 * a), (-1 * b + sqrt(d)) / (2 * a));
    }
    return 0;
}