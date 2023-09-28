#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int i = 1;
	double s, e = 1, t = 1;
	s = 4 - 2 / 4 - 1 / 5 - 1 / 6;

	while (e >= (1 / pow(10, 6)))
	{
		t = t * 16;
		e = ((4 / (8 * i + 1)) - (2 / (8 * i + 4)) - (1 / (8 * i + 5)) - (1 / (8 * i + 6))) / t;
		s = s + e;
		i++;
	}
	cout << setprecision(6) << fixed << s;
	return 0;
}