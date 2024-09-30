#include <stdio.h>
#include <math.h>
#include <utility>

int main(int argc, char* argv[])
{

    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;

    scanf_s("%d %d %d", &x1, &y1, &r1);
    scanf_s("%d %d %d", &x2, &y2, &r2);

    int d = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
    int maxr = std::max(r1, r2);
    int minr = std::min(r1, r2);

    if (d <= maxr and minr * 2 < maxr)
    {
        printf("NO");
    }
    else if (r1 + r2 >= d)
    {
        printf("YES");
    }
    else if (r1 + r2 < d)
    {
        printf("NO");
    }
    else if (d <= maxr and minr * 2 >= maxr)
    {
        printf("YES");
    }

    return 0;
}