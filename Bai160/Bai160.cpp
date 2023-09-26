#include <iostream>
using namespace std;
int main()
{
	int n, dv, dt, dem = 0, t;
	cin >> n;
	dt = n;

	while (dt >= 10)
	{
		dt = dt / 10;
	}

	t = n;
	while (t != 0) {
		dv = t % 10;

		if (dv == dt) 
			dem++;

		t = t / 10;
	}
	cout << dem;

	return 0;