#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double R;
	double y;
	double x;

	cout << " R = "; cin >> R;
	cout << " x = "; cin >> x;
	   

	if (x <= -1 - R)
		y = x + 1 + R;
	else
		if (-1 - R < x && -1 >= x)
			y = sqrt(pow(R, 2) - pow(x + 1, 2));
		else
			if (-1 < x && x <= 1)
				y = R;
			else
				if (x > 1 && x <= 2)
					y = R + (x - 1) * (-1 - R);
				else
					y = -1;

	cout << endl;

	cout << "y = " << y << endl;

	cin.get();
	return 0;


}