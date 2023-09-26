#include <iostream>
using namespace std;
int main()
{
	int n, t, dv, flag;
	cin >> n;
	flag = 0;
	t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0) 
			flag = 1;
	}
	if (flag == 1)
		cout << "TT";
	else
		cout << "ko TT";
	return 0;
}