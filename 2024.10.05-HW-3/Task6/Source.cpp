#include<cstdio>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int main(int argc, char* argv[])
{
	int a = 0, b = 0;

	scanf_s("%d %d", &a, &b);

	printf("%d", a * b / gcd(a, b));

	return 0;
}