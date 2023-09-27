#include <iostream>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xM >> yM;
	float Sabc = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC); 
	float Sabm = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM); 
	float Smbc = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC); 
	float Smac = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC);
	if (Sabc == Sabm + Smbc + Smac)
		cout << "M trong";
	else 
		cout << "M ngoai";
	return 0;
}