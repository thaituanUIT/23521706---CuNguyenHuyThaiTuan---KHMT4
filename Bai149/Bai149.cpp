#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int m = abs(a);
    int n = abs(b);

    while (m * n != 0)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }

    int kq = m + n;
    cout << kq;

    return 0;
}