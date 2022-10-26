#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	// we want a palindrome of two 3 digit numbers.
	int n = 3;

	int upper_limit = pow(10,n) - 1;
	int lower_limit = 1 + upper_limit / 10;
 
	int max_product = 0;

	for (int i = upper_limit; i >= lower_limit; i--) {
		for (int j = i; j >= lower_limit; j--) {
			// calculating product of
			// two n-digit numbers
			int product = i * j;
			if (product < max_product)
				break;

			int number = product;
			int reverse = 0;
 
			// is it a palindrome?
			while (number != 0) {
				reverse = reverse * 10 + number % 10;
				number /= 10;
			}
 
			// update if it is a larger palindrome than
			// the previous one
			if (product == reverse && product > max_product)
				max_product = product;
		}
	}

	printf("%i\n", max_product);
	
	return 0;
}