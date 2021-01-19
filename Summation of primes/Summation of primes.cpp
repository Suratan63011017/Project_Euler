#include<stdio.h>
#include<math.h>
int main() {
	long long int sum = 0;
	long long int n = 2;
	bool check;
	while (n < 2000000) {
		check = true;
		for (long long int i = 2; i < sqrt(n) + 1; i++) {
			if (n % i == 0) {
				check = false;
			}
		}
		if (check == true) {
			sum += n;
		}
		n++;
	}
	printf("%lld", sum + 2);
	return 0;
}