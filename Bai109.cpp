#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{ 
	double s=1,m=1,e=1,i=1;
	while(e>= pow(10,-6))
	{
		m=m*i;
		e=1/m;
		s=s+e;
		i++;
	}
		cout<<setprecision(6)<<fixed<<s;
	return 0;
}