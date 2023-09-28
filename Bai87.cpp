#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s=x;
    float t=x;
    int i=3;
    int dau = -1;
    while ( i <= 2 * n + 1)
    {
        t = t * x * x;
        s = s + dau * t; 
        i = i+2;
        dau = -dau;
    }
    cout << s;
    return 0;
}