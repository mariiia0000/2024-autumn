#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int count = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf_s("%d", &a);
			if (a == 1)
			{
				count += 1;
			}
		}
	}
	printf("%d", count / 2);
	return 0;
}