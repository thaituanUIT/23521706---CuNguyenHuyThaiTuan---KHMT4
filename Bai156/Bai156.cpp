#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n; 
	int i = 1;
	int t = 1;

	while (i <= n)
	{
		t = t * i;
		cout << " ," << t;

		i++;
	}
	return 0;
}