#include <iostream>
using namespace std;
int main()
{
	int n, t, tich, dv;
	cin >> n;
	tich = 1;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	cout << tich;
	return 0;
}