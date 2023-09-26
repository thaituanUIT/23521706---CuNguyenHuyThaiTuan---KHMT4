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
		du = t % 3;

		if (du != 0)
			flag = 0;

		t = t / 3;
	}

	cout << flag;

	return 0;
}