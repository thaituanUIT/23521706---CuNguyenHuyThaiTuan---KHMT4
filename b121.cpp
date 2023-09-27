#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	double at=1,att=1,ahh,n,i=2;
	cin>>n;
	while(i<=n){
		ahh=att+at;
		i++;
		att=at;
		at=ahh;
	}
	cout<<ahh;
	return 0;
}