#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = x;
    float t = x;
    int i = 3;
    while (i <= 2 * n + 1)
    {
        t = t * x * x;
        s = s + t;
        i = i + 2;
    }
    cout << s;
    return 0;
}