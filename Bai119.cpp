#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=2,ahh,n,i=2;
	cin>>n;
	while(i<=n)
    {
		ahh=(at*at+2)/(2*at);
		i++;
		at=ahh;
	}
	cout<<ahh;
	return 0;
}