#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=2,ahh,n,i=2;
	cin>>n;
	while(i<=n)
	{
		ahh=at+2*i+1;
		i++;
		at=ahh;
	}
	cout<<ahh;
	return 0;
}