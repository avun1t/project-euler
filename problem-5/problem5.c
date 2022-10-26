#include <stdio.h>

// blatantly stolen from https://gist.github.com/mmstick/079994ff16e3f2b85007
int gcd(int x, int y)
{
	return y == 0 ? x : gcd(y, x % y);
}

int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

int main(int argc, char *argv[])
{
	int result = 1;

	for (int i = 2; i < 20; i++) {
		result = lcm(result, i);
	}

	printf("%i\n", result);

	return 0;
}