#include <iostream>
using namespace std;
int main()
{
	float s = 1;
	int n, i = 1;
	cin >> n;

	while (i <= n) 
	{
		s = (float)1 / (1 + s);
		i++;
	}
	cout << s;

	return 0;
}