#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)i / (i + 1);
		i++;
	}
	cout << s;
	return 0;
}