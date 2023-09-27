#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x<=y && y<=z)cout<<1;
	else cout<<0;
	return 0;
}