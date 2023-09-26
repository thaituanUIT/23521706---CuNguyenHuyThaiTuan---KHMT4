#include <iostream>
using namespace std;
int main()
{
	int n, i = 1;
	cin >> n;
	float s = 0;

	while (i <= n) {
		s = s + 1.0 / i;
		cout << " ," << s;
		i++;
	}
	return 0;
}