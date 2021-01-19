#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	long int coffactor = 0;
	long int a = 1;
	long long int sum;
	while (coffactor < 500) {
		sum = 0;
		coffactor = 0;
		for (int i = 1; i <= a; i++) {
			sum += i;
		}
		for (int j = 1; j < sqrt(sum); j++) {
			if (sum % j == 0) {
				coffactor += 2;
			}
			if (j + 1 == sqrt(sum)) {
				coffactor++;
			}
		}
		a++;
	}
	printf("%lld", sum);
	return 0;
}