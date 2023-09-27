#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=2,bt=1,ahh,bhh,n,i=2;
	cin>>n;
	while(i<=n){
		ahh=2*at+ 3*bt;
		bhh=3*bt+at;
		i++;
		at=ahh;
		bt=bhh;
	}
	cout<<ahh<<" "<<bhh;
	return 0;
} 