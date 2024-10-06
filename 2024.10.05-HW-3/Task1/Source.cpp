#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int count = 0;
	for (int k = 0; k <= n; ++k)
	{
		int i = 0;
		scanf_s("%d", &i);
		if (i == 1)
		{
			count += 1;
		}
	}
	int d = n - count;
	if (count > d)
	{
		printf("%d", d);
	}
	else
	{
		printf("%d", count);
	}

	return 0;
}