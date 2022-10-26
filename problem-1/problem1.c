#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum_of_multiples = 0;

	for (int i = 0; i < 1000; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum_of_multiples += i;
		}
	}

	printf("Sum of multiples: %i\n", sum_of_multiples);

	return 0;
}