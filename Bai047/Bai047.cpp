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
		s = s + sqrt(1 + (float)1 / pow(i, 2) + (float)1 / pow((i + 1), 2));
		i++;
	}
	cout << s;
	return 0;
}