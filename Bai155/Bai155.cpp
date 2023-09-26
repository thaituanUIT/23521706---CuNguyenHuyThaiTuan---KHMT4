#include <iostream>
using namespace std;
int main()
{
	int n; 
	cin >> n;
	int i = 0;
	int t = 1;

	while (i <= n)
	{
		t = t * 2;
		cout << " ," << t;
		
		i++;
	}
	return 0;