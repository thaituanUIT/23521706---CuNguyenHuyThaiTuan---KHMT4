#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    int i = 1;

    while (i < n)
    {
        if (n % i == 0)
            s = s + i;
        i = i + 1;
    }

    if (s == n)
        cout << " La hoan thien";
    else
        cout << "Ko hoan thien";
    return 0;
}