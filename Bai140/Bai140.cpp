#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = pow(b, 2) - 4 * a * c;

    while (delta <= 0)
    {
        if (delta == 0)
        {
            double x0 = (-b) / (2 * a);
            cout << x0;
        }
        else if (delta < 0)
        {
            cout << "VN";
            return 0;
        }
    }
    
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << x1 << " " << x2;
    
    return 0;
}