#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 2;
    while (i <= n)
    {
        s = pow(sqrt(s + i), i);
        i = i + 1;
    }
    cout << s;
    return 0;
}