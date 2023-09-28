#include <iostream>
using namespace std;
int main()
{
	double att = 1, ahh, n, at = 2;
	int i = 2;
    cin >> n;

	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}