#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 1;
    int t = n;

    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            flag = 0;
        t = t / 10;
        if (flag == 1)
            cout << "La so toan chan";
        else
            cout << "Khong la so toan chan";
    }
    return 0;
}