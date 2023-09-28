#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int m = 0;
    int i = 1;
    int dau = 1;
    while (i <= n)
    {
        m = m + i;
        s = s + dau / m;
        i = i + 1;
        dau = -dau;
    }
    cout << s;
    return 0;
}