#include<stdio.h>
int main() {
	int a[1000] = { 0 }, b[1000] = { 0 }, c[1000] = { 0 };
	a[999] = 1;
	b[999] = 1;
	long int index = 2;
	while (c[0] == 0) {
		for (int i = 0; i < 1000; i++) {
			c[i] = 0;
		}
		for (int i = 999; i >= 1; i--) {
			c[i] += a[i] + b[i];
			if (c[i] >= 10) {
				c[i] -= 10;
				c[i - 1] += 1;
			}
		}
		for (int i = 0; i < 1000; i++) {
			a[i] = b[i];
			b[i] = c[i];
		}
		index++;
	}
	for (int i = 0; i < 1000; i++) {
		printf("%d", c[i]);
	}
	printf("\n\n%ld", index);
	return 0;
}