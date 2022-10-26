#include <stdio.h>
#include <math.h>

int sum_of_squares(int n)
{
	int result = 0;

	for (int i = 1; i <= n; i++) {
		result += pow(i, 2);
	}

	return result;
}

int square_of_sums(int n)
{
	int result = 0;

	for (int i = 1; i <= n; i++) {
		result += i;
	}

	return pow(result, 2);
}

int main(int argc, char *argv[])
{
	printf("%i\n", square_of_sums(100) - sum_of_squares(100));

	return 0;
}