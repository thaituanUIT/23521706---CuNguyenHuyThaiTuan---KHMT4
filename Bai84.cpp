#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = 0;
    float t = x;
    int i = 1;
    while (i<=n)
    {
        t = sin(t);
        s = s+t;
        i = i+1;
    }
    cout << s;
    return 0;
}