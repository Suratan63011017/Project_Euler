#include<iostream>
using namespace std;
int main() {
	long int largest = 2;
	long int keep = 0;
	long int term;
	long int stack = 0;

	for (long int i = 2; i < 1000000; i++) {
		term = 0;
		stack = i;
		while (stack != 1) {
			if (stack % 2 == 0) {
				stack /= 2;
			}
			else {
				stack = (stack * 3) + 1;
			}
			term++;
		}
		if (term > keep) {
			keep = term;
			largest = i;
		}
	}
	cout << largest;
	return 0;
}