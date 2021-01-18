#include<iostream>
using namespace std;

int main() {
	long long int num = 600851475143;
	long long int n = 3;
	while (num != 1) {
		if (num % n == 0) {
			cout << n << endl;
			num /= n;
		}
		else {
			n += 2;
		}
	}

	return 0;
}