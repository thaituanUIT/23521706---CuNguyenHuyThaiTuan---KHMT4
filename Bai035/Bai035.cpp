#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		i++;
	}
	cout << t;
	return 0;
}