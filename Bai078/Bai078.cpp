#include <iostream>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int n;
    cin >> n;
    float s = 1;
    float t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + t;
        i = i + 1;
    }
    cout << s;
    return 0;
}