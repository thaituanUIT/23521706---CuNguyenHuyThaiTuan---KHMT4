#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    float delta = b*b-4*a*c;
    while (delta <=0)
    if ( delta ==0)
    {
        float x0=(-b)/(2*a);
        cout << x0;
    }
    else 
             cout << "VN";
    else
    {
        float x1= (-b+pow(d))/(2a);
        float x2= (-b-pow(d))/(2a);
        cout << x1 << x2;
    }
    return 0;
}
