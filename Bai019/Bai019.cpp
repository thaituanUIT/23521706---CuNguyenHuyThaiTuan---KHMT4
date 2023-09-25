#include <iostream>
using namespace std;
int main() {
	float x;
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x5 = x4 * x;
	float x8 = x4 * x4;
	float x13 = x8 * x5;
	cout << x13;
	return 0;
}