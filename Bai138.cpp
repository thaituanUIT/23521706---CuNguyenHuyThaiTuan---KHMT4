#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	float x;
	cin>>x;
	if(x>=0)
		if(x<1)cout<<(5*x-7);
		else cout<<(2*pow(x,3)+5*pow(x,2)-8*x+3);
	else cout<<pow(x,3)*(-2)+6*x+9;
	return 0;
}