#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,i=0;
	cin>>n;
	int t=1;
	while(i<=n)
    {
		t=t*2;
		cout<<t;
		if(i<n)cout<<",";
		i++;
	}
	return 0;
}