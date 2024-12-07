#include <cstdio>

int main(int argc, char* argv[])
{
	int a[300] = {0};
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < 2 * n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int s = 0;
	int n1 = 1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] * a[n + i] > s)
		{
			s = a[i] * a[n + i];
			n1 = i + 1;
		}
	}

	printf("%d", n1);

	return 0;

}