#include <iostream>
using namespace std;
int main()
{
	double at = 1, bt = 1; 
	double ahh, bhh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = 2 * at + 3 * bt;
		bhh = 3 * bt + at;
		i++;
		at = ahh;
		bt = bhh;
	}

	cout << ahh << " " << bhh;

	return 0;
}