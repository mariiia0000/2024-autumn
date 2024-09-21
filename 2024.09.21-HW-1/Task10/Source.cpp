#include<iostream>

int main(int argc, char* argv[])
{
	int s = 0;

	scanf_s("%d", &s);
	
	int x = s / 6;

	printf("%d \n", x);
	printf("%d \n", x * 4);
	printf("%d", x);
	
	return EXIT_SUCCESS;
}