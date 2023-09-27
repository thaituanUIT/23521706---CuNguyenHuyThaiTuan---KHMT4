#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int x,y,n;
	cin>>x>>y;
	n=x;
	while(n<=y){
		if((n%4==0&&n%100!=0)||n%400==0) cout<<n<<" ";
		n++;
	}
	return 0;
}