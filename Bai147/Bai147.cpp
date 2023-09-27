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
        if (dv % 2 == 0)
            flag = 0;
        t = t / 10;
    }

    if (flag == 1)
        cout << "La so toan le";
    else
        cout << "ko la so toan le";
    return 0;
}