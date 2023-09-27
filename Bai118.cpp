#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=2,ahh,n,i=2;
	cin>>n;
	while(i<=n)
    {
		ahh=(-9*at-24)/(5*at+13);
		i++;
		at=ahh;
	}
	cout<<ahh;
	return 0;
}