#include <iostream>
using namespace std;
int main()
{
	int n, t, dv;
	cin >> n;
	double s = 0;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
		{
			s = s + dv;
		}
		t = t / 10;
	}
	cout << s;
	return 0;
}