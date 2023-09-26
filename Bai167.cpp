#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int s=0,k=0;
	while(s+k+1<n)
	{
		k++;
		s=s+k;
	}
	 cout<<k;

	return 0;
}