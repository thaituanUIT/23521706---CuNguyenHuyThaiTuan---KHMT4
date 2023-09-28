#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float att = -1;
    float at = 3;
    int i = 2;
    while (i <= n)
    {
        float ahh = 5 * at + 6 * att;
        i++;
        att = at;
        at = ahh;
    }
    cout << "ahh";
    return 0;
}