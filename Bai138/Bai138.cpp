#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cin >> x;
	float f;
	if (x >= 0)
	{
        if (x < 1)
		{
           f = (5 * x - 7);
	       cout << f;
	    }
		
	    else
		{
		   f = (2 * pow(x, 3) + 5 * pow(x, 2) - 8 * x + 3);
		   cout << f;
	    }
    }
	else
	{
        f = pow(x, 3) * (-2) + 6 * x + 9;
	    cout << f;
	}
		
	return 0;
}