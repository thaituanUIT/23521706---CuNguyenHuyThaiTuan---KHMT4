#include <iostream>
using namespace std;
int main()
{
	double at = 2, ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}

	cout << ahh;

	return 0;
}