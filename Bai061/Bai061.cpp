#include<iostream>
using namespace std;
int main()
{
	int n, t, dem, dv;
	cin >> n;
	dem = 0;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	cout << dem;
	return 0;
}