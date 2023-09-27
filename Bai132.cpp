#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	float xA,yA,xB,yB,xC,yC,xM,yM;
	cin>>xA>>yA>>xB>>yB>>xC>>yC>>xM>>yM;
	if(abs(xA*yB+ xB*yC + xC*yA- xB*yA- xC*yB- xA*yC)==abs(xA*yB+ xB*yM + xM*yA- xB*yA- xM*yB- xA*yM )+abs(xM*yB+ xB*yC+ xC*yM- xB*yM- xC*yB- xM*yC)+abs(xA*yM+ xM*yC+ xC*yA- xM*yA- xC*yM- xA*yC))
	cout<<"M trong";
	else cout<<"M ngoai";
	return 0;
}
  
