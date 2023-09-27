#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    while (a == 0)
    {
        if (b == 0)
            cout << "VSN";
        else
            cout << "VN";
    }
    float x = -b / a;
    cout << x;
    return 0;
}