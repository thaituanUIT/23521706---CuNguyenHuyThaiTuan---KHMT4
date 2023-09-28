#include <iostream>
using namespace std;
int main()
{
	float at = -2, tt = 3, pp = 7, ahh;
	int i = 2;
	int n;
	cin >> n;

	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}

	cout << ahh;

	return 0;
}