#include<iostream>
int main() {
	//complied and run in devC
	int _1to10[] = { 3,3,5,4,4,3,5,5,4,3 };
	int _11to19[] = { 6,6,8,8,7,7,9,8,8 };
	int _20to90step10[] = { 6,6,5,5,5,7,6,6 };
	int _100 = 7;
	int _and = 3;
	long long int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		if (i <= 10) {
			sum += _1to10[i - 1];
		}
		else if (i > 10 && i < 20) {
			sum += _11to19[i - 11];
		}
		else if (i >= 20 && i < 100) {
			if (i % 10 == 0) {
				sum += _20to90step10[(i / 10) - 2];
			}
			else {
				sum += _20to90step10[((i - (i % 10)) / 10) - 2];
				sum += _1to10[(i % 10) - 1];
			}
		}
		else if (i >= 100 && i < 1000) {
			if (i % 100 == 0) {
				sum += _1to10[(i / 100) - 1];
				sum += +_100;
			}
			else {
				sum += _1to10[((i - (i % 100)) / 100) - 1];
				sum += _100;
				sum += _and;
				if (i % 100 <= 10) {
					sum += _1to10[(i % 100) - 1];
				}
				else if ((i % 100) > 10 && (i % 100) < 20) {
					sum += _11to19[(i % 100) - 11];
				}
				else if ((i % 100) >= 20 && (i % 100) < 100) {
					sum += _20to90step10[(((i % 100) - (i % 10)) / 10) - 2];
					sum += _1to10[(i % 10) - 1];
				}
			}
		}
	}
	std::cout << sum + 11;
	return 0;
}