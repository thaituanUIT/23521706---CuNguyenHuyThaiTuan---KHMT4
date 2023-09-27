#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x < y + z && y < x + z && z < x + y) 
		cout << "ton tai";
	else 
		cout << "k ton tai";
	return 0;
}