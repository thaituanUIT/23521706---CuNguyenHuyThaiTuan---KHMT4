#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = 0;
    float t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * sin(x);
        s = s + t;
        i = i + 1;
    }
    cout << s;
    return 0;
}