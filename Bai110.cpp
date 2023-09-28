#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double s=0, dau=1,e=4,i=1;
	int n;
	cin>>n;
	while(e>=pow(10,-6))
	{
		e=4/i;
		s = s + dau * e;
		i = i + 2;
		dau = - dau;

	}
	cout<<setprecision(6)<<fixed<<s;
	return 0;
}