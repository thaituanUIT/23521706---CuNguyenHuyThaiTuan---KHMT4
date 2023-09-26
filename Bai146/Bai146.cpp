#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dn = 0;
    int t = n;

    while (t != 0)
    {
        int dv = t % 10;
        int dn = dn * 10 + dv;
        t = 1 / 10;
    }

    if (dn == n)
        cout << "La so doi xung";
    else
        cout << "Ko la so doi xung";

    return 0;
}