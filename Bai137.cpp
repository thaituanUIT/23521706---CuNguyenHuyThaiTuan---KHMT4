#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	float x;
	cin>>x;
	if(x>=5) cout<<(2*pow(x,2)+5*x+9);
	else cout<<(-2*pow(x,2)+4*x-9);
	return 0;
}