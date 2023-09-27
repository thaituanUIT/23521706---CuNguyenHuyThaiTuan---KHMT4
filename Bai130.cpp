#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	float AB,BC,CA;
	cin>>AB>>BC>>CA;
	if((AB < BC + CA&&BC < CA + AB&&CA < AB + BC)) cout<<"ton tai";
	else cout<<"k ton tai";
	return 0;
}