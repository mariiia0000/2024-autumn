#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	for (int a = 0; a < n; ++a)
	{
		int m = 0;
		scanf_s("%d", &m);
		if (m > 437)
		{
			continue;
		}
		else
		{
			printf("Crash %d", a + 1);
			return 0;
		}
	}
	printf("No crash");
	return 0;
}