#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,dv,lc,dem=0,t;
	cin>>n;
	lc=n%10;
	t=n;
	while(t!=0){
		dv=t%10;
		if(dv<lc) lc=dv;
		t=t/10;
	}
	t=n;
	while(t!=0){
		dv=t%10;
		if(dv==lc) dem++;
		t=t/10;
	}
	cout<<dem;
	return 0;
}