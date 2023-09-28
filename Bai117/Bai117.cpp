#include <iostream>
using namespace std;
int main()
{
	double at = 3, att = -2, n;
	double ahh;
	int i = 2, t = 2;
	cin >> n;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}