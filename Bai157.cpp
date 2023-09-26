#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,i=1;
	cin>>n;
	float s=0;
	while(i<=n){
		s=s+1.0/i;
		cout<<s;
		if(i<n)cout<<",";
		i++;
	}
	return 0;
}