#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		cout << "la nam nhuan";
	else 
		cout << "ko la nam nhuan";
	return 0;
}