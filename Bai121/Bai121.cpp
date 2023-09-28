#include <iostream>
using namespace std;
int main()
{
	double at = 1, att = 1;
	double ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = att + at;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}