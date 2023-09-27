#include <iostream>
using namespace std;
int main()
{
	double ahh, bhh, n; 
	int i = 2;
    double at = 2, bt = 1; 
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