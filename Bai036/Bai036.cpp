#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float x;
	cin >> x;
	double t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i++;
	}
	cout << t;
	return 0;
}