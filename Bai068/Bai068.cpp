#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	double s, t;
	s = 0;
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	cout << s;
	return 0;
}