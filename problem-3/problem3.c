#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	long n = 600851475143;
	
	// number of 2s that divide n
    while (n % 2 == 0) {
        n = n / 2;
    }
 
    // n must be odd at this point so we can skip
    // one element (i = i + 2)
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            n = n / i;
        }
    }
	
	printf("%ld\n", n);
	
	return 0;
}