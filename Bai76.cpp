#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s=1+x;
    float t=x;
    float m=1;
    int i=3;
    while ( i <= 2*n+1)
    {
        t = t*x*x; 
        m = m*i*(i-2);
        s = s + t/m;
        i = i+2;
    }
    cout << s;
    return 0;
}