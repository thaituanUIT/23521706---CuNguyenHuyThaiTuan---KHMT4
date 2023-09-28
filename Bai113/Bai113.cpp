#include <iostream>
using namespace std;
int main()
{
	double at = 2, ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}