#include <iostream>
using namespace std;
int main() {
	float x;
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x8 = x4 * x4;
	float x14 = x8 * x6;
	cout << x14;
	return 0;
}