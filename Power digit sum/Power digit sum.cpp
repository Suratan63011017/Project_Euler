#include<stdio.h>
int main() {
	int arr[1000] = { 0 };
	arr[999] = 1;
	int i = 0;
	long int sum = 0;
	while (i < 1000) {
		for (int j = 0; j < 1000; j++) {
			arr[j] *= 2;
			if (arr[j] >= 10) {
				arr[j] -= 10;
				arr[j - 1] += 1;
			}
		}
		i++;
	}
	for (int i = 0; i < 1000; i++) {
		sum += arr[i];
	}
	printf("%ld", sum);
	return 0;
}