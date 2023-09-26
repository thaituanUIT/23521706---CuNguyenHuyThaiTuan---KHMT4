#include <iostream>
using namespace std;
int main()
{
	int n, du;
	cin >> n;
	int t = n;
	int flag = 1;

	while (t > 1)
	{
		du = t % 5;

		if (du != 0)
			flag = 0;

		t = t / 5;
	}

	cout << flag;

	return 0;
}