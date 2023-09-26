#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,t=1,k=1;
	cin>>n;
	while(2*t<=n){
		t=t*2;
		k++;
	}
	cout<<k;
	return 0;
}