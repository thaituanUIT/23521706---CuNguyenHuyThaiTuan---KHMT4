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
    int i = 1;
    int dau = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + dau * t;
        i = i + 1;
        dau = -dau;
    }
    cout << s;
    return 0;
}