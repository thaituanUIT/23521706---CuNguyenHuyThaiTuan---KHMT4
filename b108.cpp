#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double s=1,m=1,e=1,i=1,x,t=1;
	cin>>x;
	while(e>= pow(10,-6)){
		t=t*x;
		m=m*i;
		e=t/m;
		s=s+e;
		i++;
	}
		cout<<setprecision(6)<<fixed<<s;
	return 0;
}
		