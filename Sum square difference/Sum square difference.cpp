#include<stdio.h>
#include<math.h>
int main() {
	long long int a = 0, b = 0, c;
	for (int i = 1; i <= 100; i++) {
		a += pow(i, 2);
		b += i;
	}
	c = (pow(b, 2)) - a;
	printf("%lld", c);
	return 0;
}