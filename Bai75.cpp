#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x;
    cin >> x;
    int n;
    cin >> n; 
    float s=1;
    float t =1;
    float m=1;
    int i =2;
    while ( i <=2*n)
    {
        t = t*x*x;
        m = m*i*(i-1);
        s = s+ t/m;
        i = i+2;
    }
    cout << s;
    return 0;
}