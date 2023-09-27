#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=2,bt=1,ahh,bhh,n,i=2;
	cin>>n;
	while(i<=n){
		ahh=at*at+ 2*bt*bt;
		bhh=2*at*bt;
		i++;
		at=ahh;
		bt=bhh;
	}
	cout<<ahh<<" "<<bhh;
	return 0;
}