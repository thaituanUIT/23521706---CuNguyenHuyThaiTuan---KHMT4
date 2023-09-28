#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = 0;
    float t = 1;
    float m = 0;
    int i = 1;
    int dau = -1;
    while (i <= n)
    {
        t = t * x;
        m = m + i;
        s = s + dau * t / m;
        i = i + 1;
        dau = -dau;
    }
    cout << s;
    return 0;
}