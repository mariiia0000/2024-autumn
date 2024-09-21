#include<iostream>

int main(int argc, char* argv[])
{
	int h = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &h);
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int x = (h - b) / (a - b);

	printf("%d", x - int(x < 0) * (x - 1) + int((((a - b) + ((h - b) % (a - b))) % (a -b)) > 0));

	return EXIT_SUCCESS;
}