#include <stdio.h>
#include <math.h>

int main() {
	unsigned long long int max = (unsigned long long int) (pow(2,127) -1);
	printf("Highest number in long long int: %llu\n", max);
	return 0;
}
