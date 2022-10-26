#include <stdio.h>

int main(int argc, char *argv[])
{
	int fibonacci_sum = 0;
	int i = 0;
	int j = 1;
	int nth = 0;

	while (i <= 4000000) {
		if (i % 2 == 0) fibonacci_sum += i;
		nth = i + j;
		i = j;
		j = nth;
	}

	printf("%i\n", fibonacci_sum);
	return 0;
}