#include <iostream>
using namespace std;
int main()
{
	int n, t, dv;
	cin >> n;
	t = n;
	double tich = 1;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			tich = tich * dv;
		t = t / 10;
	}
	cout << tich;
	return 0;
}