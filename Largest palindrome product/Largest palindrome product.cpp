#include<iostream>
using namespace std;
int main() {
	long int c, keep, n, m, x, i, o;
	int index[7] = { 0 };
	long int largestnum = 0, keepans;
	bool check;
	for (long int a = 99; a < 1000; a++) {
		for (long int b = 91; b < 1000; b++) {
			c = a * b;
			keep = c;
			n = 0;
			i = 0;
			while (keep > 1) {
				x = keep % 10;
				index[i] = x;
				keep /= 10;
				n++;
				i++;
			}
			m = n - 1;
			o = 0;
			check = true;
			while (o != m && o < m) {
				if (index[o] != index[m]) {
					check = false;
				}
				o++;
				m--;
			}
			if (check == true) {
				keepans = c;
				if (keepans > largestnum) {
					largestnum = keepans;
				}
			}
		}
	}
	cout << largestnum << endl;
	return 0;
}