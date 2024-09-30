#include <stdio.h>

int main(int argc, char* argv[])
{

    int x = 0;
    int y = 0;
 
    scanf_s("%d %d", &x, &y);
   
    if (x == y and x == 1)
    {
        printf("0");
    }
    else if (x != y or x == 1 or y == 1)
    {
        printf("1");
    }
    else
    {
        printf("2");
    }


    return 0;
}