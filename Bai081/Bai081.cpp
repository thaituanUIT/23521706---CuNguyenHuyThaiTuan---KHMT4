#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = 0;
    float m = 1;
    int i = 0;
    while (i <= n)
    {
        m = m * (x + i);
        s = s + 1 / m;
        i = i + 1;
    }
    cout << s;
    return 0;
}