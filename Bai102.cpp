#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
    float s = 0;
    float e = 0.5;
    int i = 1;
    while ( e >= pow(10,-6))
    {
        e = 1/i;
        s = s+e;
        i = i+2;
    }
    cout << s;
    return 0;
}