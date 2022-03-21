#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int b1, b2, b3, res, need;
	
	cin >> b1 >> b2 >> b3;
	
	need = (b1 + b2 + b3) / 3;
	res = (abs(b1 - need) + abs(b2 - need) + abs(b3 - need)) / 2;
	
	if (((b1 + b2 + b3) % 3) != 0)
	{
		cout << "IMPOSSIBLE";
	} else {
		cout << res;
	}
	
	return 0;
}
