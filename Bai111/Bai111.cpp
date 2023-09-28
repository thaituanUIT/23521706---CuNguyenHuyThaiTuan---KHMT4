#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float s = 3, dau = 1, e = 3, i = 2;

	while (e >= (1 / pow(10, 6)))
	{
		e = 4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}

	cout << setprecision(6) << fixed << s;

	return 0;
}