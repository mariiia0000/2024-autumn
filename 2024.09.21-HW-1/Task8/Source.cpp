#include<iostream>

int main(int argc, char* argv[])
{
	int t = 0;

	scanf_s("%d", &t);

	int a = t % 10;
	int b = (t % 100) / 10;
	int c = t / 100;

	printf("%d", a + b + c);

	return EXIT_SUCCESS;
}