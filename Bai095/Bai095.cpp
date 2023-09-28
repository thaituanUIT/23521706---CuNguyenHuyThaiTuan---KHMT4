#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = n;
    while (i > 0)
    {
        s = sqrt(i + s);
        i = i - 1;
    }
    cout << s;
    return 0;
}