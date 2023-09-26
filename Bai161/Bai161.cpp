#include <iostream>
using namespace std;
int main()
{
	int n, dv, hc;
	cin >> n;
	int t = n;
	int flag = 1;

	while (t >= 10) {
		dv = t % 10;
		hc = (t / 10) % 10;

		if (dv <= hc)
			flag = 0;

		t = t / 10;
	}
	cout << flag;

	return 0;