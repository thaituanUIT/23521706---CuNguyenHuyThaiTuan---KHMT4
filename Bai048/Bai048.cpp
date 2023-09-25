#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double x, t;
	cin >> x;
	t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i++;
	}
	cout << t;
	return 0;
}