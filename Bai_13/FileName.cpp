#include <iostream>
using namespace std;
int main() {
	float x, x2, x4, x7, x8;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x7 = x8 / x;
	cout << x7;
	return 0;
}