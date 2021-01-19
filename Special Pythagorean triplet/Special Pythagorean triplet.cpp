#include<stdio.h>
#include<math.h>
int main() {
	long long int c;
	for (long long int a = 1; a < 1000; a++) {
		for (long long int b = 1; b < 1000; b++) {
			c = 1000 - (a + b);
			if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
				printf("%lld", a * b * c);
				return 0;
			}
		}
	}
	return 0;
}