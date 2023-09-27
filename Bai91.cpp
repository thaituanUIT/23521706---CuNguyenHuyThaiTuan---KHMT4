#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s=-1;
    float t=1;
    float m=1;
    int i=2;
    int dau = 1;
    while (i<=2*n)
    {
        t = t * x * x;
        m = m * i * (i-1);
        s = s + dau * t/m;
        i = i + 2;
        dau = -dau;
    } 
    cout << s;
    return 0;
}
