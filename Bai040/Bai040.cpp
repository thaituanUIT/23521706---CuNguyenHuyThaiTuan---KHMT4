#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i * (i + 1);
		i++;
	}
	cout << s;
	return 0;
}