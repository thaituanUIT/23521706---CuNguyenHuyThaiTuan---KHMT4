#include <iostream>
using namespace std;
int main()
{
	double at = 2, ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}