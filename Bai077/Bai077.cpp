#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float k;
    cin >> k;
    int n;
    cin >> n;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        float s = s + pow(i, k);
        i = i + 1;
    }
    cout << s;
    return 0;
}