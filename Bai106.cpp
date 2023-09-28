#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double s,m=1,e=1,i=4,x,t,dau=-1;
	cin>>x;
	double xx=(x*3.14)/180;
	s=xx;t=xx;e=xx;
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
		