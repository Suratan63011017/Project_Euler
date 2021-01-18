#include<iostream>
using namespace std;
int main() {
	long long int a = 1, b = 2, c, sum = 0;
	while (b < 4000000) {
		if (b % 2 == 0) {
			sum += b;
		}
		c = a;
		a = b;
		b += c;
	}
	cout << sum;
	return 0;
}