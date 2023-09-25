#include <iostream>
using namespace std;
int main()
{
	int n, t, dem;
	cin >> n;
	dem = 0;
	t = n;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << dem;
	return 0;
}