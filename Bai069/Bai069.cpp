#include <iostream>
using namespace std;
int main()
{
	int n, i;
	double s, t, x;
	cin >> n >> x;
	s = 0;
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i++;
	}
	cout << s;
	return 0;
}