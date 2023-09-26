#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    int i = 0;

    while (i <= n)
    {
        if (i * i == n)
            flag = 1;
        i = i + 1;
    }

    if (flag == 1)
        cout << "La so chinh phuong";
    else
        cout << "Ko la so chinh phuong";
    return 0;
}