#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	float r;
	cin >> r;
	float s = 1 / 2 * pow(r, 2) * sin(2 * M_PI / n);
	cout << s;
	return 0;

}