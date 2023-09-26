#include<iostream>
using namespace std;
int main()
{
	int n, t, lc, dv;
	cin >> n;
	lc = n % 10;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (lc > dv)
			lc = dv;
		t = t / 10;
	}
	cout << lc;
	return 0;
}