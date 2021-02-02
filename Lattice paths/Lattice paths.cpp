#include<stdio.h>
int main() {
	int arr[20] = { 21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40 };
	int divided[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int i = 2;
	long long int m = 1, n = 1;
	bool rep;
	while (i <= 20) {
		rep = false;
		for (int j = 0; j < 20; j++) {
			for (int k = 0; k < 20; k++) {
				if (arr[j] % i == 0 && divided[k] % i == 0) {
					arr[j] /= i;
					divided[k] /= i;
					rep = true;
				}
			}
		}
		if (rep == false) {
			i++;
		}
	}
	for (int i = 0; i < 20; i++) {
		m *= arr[i];
		n *= divided[i];
	}
	printf("%lld", (m / n));
	return 0;
}