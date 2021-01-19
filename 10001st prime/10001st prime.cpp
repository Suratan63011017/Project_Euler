#include<stdio.h>
#include<math.h>
int main() {
	int n = 0;
	long long int m = 2;
	bool check;
	while (n < 10000) {
		check = true;
		for (int i = 2; i < sqrt(m) + 1; i++) {
			if (m % i == 0) {
				check = false;
			}
		}
		if (check == true) {
			n++;
		}
		m++;
	}
	printf("%lld", m - 1);
	return 0;
}