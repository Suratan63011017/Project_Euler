#include<iostream>
using namespace std;
int main() {
	int num[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	long int product = 1;
	int a = 2;
	bool check, checks;
	do {
		check = false;
		for (int i = 0; i < 20; i++) {
			if (num[i] % a == 0) {
				num[i] /= a;
				check = true;
			}
		}
		if (check == true) {
			product *= a;
		}
		else if (check == false) {
			checks = false;
			for (int j = 0; j < 20; j++) {
				if (num[j] != 1) {
					checks = true;
				}
			}
			if (checks == true) {
				a++;
				check = true;
			}
		}
	} while (check == true);
	cout << product;
	return 0;
}