#include <stdio.h>
#include <math.h>

int main() {
	long long int max = (long long int) (pow(2,63) -1);
	long long int min = (long long int) (pow(2,63) *  -1);
	printf("Highest number in long long int: %lld\n", max);
	printf("Lowest number in long long int: %lld\n", min);
	return 0;
}
