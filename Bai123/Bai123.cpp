#include <iostream>
using namespace std;
int main()
{
	double at = 2, bt = 1; 
	double ahh, bhh, n; 
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh;
	return 0;
}