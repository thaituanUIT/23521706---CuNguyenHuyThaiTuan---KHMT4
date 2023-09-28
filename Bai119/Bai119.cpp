#include <iostream>
using namespace std;
int main()
{
	double at = 2, ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}

	cout << ahh;

	return 0;
}