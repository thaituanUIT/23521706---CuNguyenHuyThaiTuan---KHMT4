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
        t = t * x;
        s = sqrt(t + s);
        i = i + 1;
    }
    cout << s;
    return 0;
}