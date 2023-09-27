#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double att=1,ahh,n,i=2,at=2;
	cin>>n;
	while(i<=n)
    {
		ahh=4*at+att;
		i++;
		att=at;
		at=ahh;
    }
	cout<<ahh;
	return 0;
}
