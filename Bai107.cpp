#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double s=1,m=1,e=1,i=2,x,t=1,dau=-1;
	cin>>x;
	double xx=(x*3.14)/180;
	while(e>= pow(10,-6)){
		t=t*xx*xx;
		m=m*(i-1)*i;
		e=t/m;
		s=s+e*dau;
		dau=-dau;
		i=i+2;
	}
	cout<<setprecision(6)<<fixed<<s;
	return 0;
}
		