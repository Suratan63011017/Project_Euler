#include<stdio.h>
#include<math.h>
long int dn(long int num) {
	long int sum = 0, j;
	for (float i = 1; i <= sqrt(num); i++) {
		j = (int)i;
		if (num % j == 0 && i != 1 && (pow(i, 2) != num)) {
			sum += i + (num / i);
		}
		else if ((pow(i, 2) == num) || i == 1) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int arr[10000], sum = 0;
	for (int i = 1; i < 10000; i++) {
		arr[i] = dn(i);
	}
	for (int i = 1; i < 10000; i++) {
		if (i == arr[arr[i]] && i != arr[i]) {
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}