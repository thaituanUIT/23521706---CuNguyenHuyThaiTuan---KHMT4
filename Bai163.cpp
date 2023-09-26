#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,t;
	cin>>n;
	t=n;
	while(t%2==0){
		t=t/2;
	}
	cout<<t;
	return 0;
}