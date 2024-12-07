#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = {0};
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int b = 0;
	int count = 0;
	scanf_s("%d", &b);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == b)
		{
			++count;
		}
	}
	printf("%d", count);
	return 0;
}