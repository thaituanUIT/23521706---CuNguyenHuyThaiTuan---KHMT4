#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,i=1;
	cin>>n;
	int t=1;
	while(i<=n)
    {
		t=t*i;
		cout<<t;
		if(i<n)cout<<",";
		i++;
	}
	return 0;
}