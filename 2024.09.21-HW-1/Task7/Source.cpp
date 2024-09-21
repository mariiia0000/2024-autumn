#include<iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;

	scanf_s("%d", &v);
	scanf_s("%d", &t);

	int k = 1 + ((v * t) % 109 + 109) % 109;

	printf("%d", k);

	return EXIT_SUCCESS;
}