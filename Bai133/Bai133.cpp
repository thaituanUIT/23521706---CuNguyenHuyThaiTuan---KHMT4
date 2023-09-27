#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "tam giac deu";
		else
			if (x * x == y * y + z * z || z * z == x * x + y * y || y * y == z * z + x * x)
				if (x == y || y == z || x == z)
					cout << "tam giac vuong can";
				else
					cout << "tam giac vuong";
			else if (x == y || y == z || x == z)
				cout << "tam giac can";
			else
				cout << "tam giac thuong";
	}
	else 
		cout << "khong la tam giac";
	return 0;
}