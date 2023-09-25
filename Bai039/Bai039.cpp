#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * (1 + ((float)1 / pow(i,2)));
		i++;
	}
	cout << t;
	return 0;
}