#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double i=1,t=1;
	double s ,e=1,a=4*6*5;
	s =(4*a-2*5*6-4*5-4*6)/a;
	
	while(e>=(1/pow(10,6)))
	{
		t=t*16;
	e =( (4/(8*i+1) )- (2/(8*i+4)) - (1/(8*i+5)) - (1/(8*i+6))) / t;
		s=s+e;
		i++;
	}
		cout<<setprecision(6)<<fixed<<s;
	return 0;
}