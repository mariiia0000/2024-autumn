#include <iostream>



int main(int argc, char* argv[]) {

	int const N = 1000;
	int massiv[N];
	int n = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int numb = 0;
		scanf_s("%d", &numb);
		massiv[i] = numb;

		}
	int x = 0;
	scanf_s("%d", &x);
	int ans = 0;

	for (int i = 0; i < n; i++) {

		if (massiv[i] == x){
			ans++;
	}
	printf("%d", *ans);
	}

	return EXIT_SUCCESS;
}