#include <iostream>
using namespace std;
int main() {
	float x;
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * x;
	cout << x9;
	return 0;
}