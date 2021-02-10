#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[200] = { 0 };
	arr[199] = 1;
	long int carry = 0, sum = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 199; j >= 2; j--) {
			arr[j] *= i;
			arr[j] += carry;
			carry = arr[j] / 10;
			arr[j] = arr[j] % 10;

		}
	}
	for (int i = 0; i < 200; i++) {
		sum += arr[i];
	}
	printf("%ld", sum);
	return 0;
}