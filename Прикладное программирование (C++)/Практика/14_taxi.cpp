#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int car1, car2, car3, result, need;
	
	cin >> car1 >> car2 >> car3;
	
	need = (car1 + car2 + car3) / 3;
	result = (abs(car1 - need) + abs(car2 - need) + abs(car3 - need)) / 2;
	
	if (((car1 + car2 + car3) % 3) != 0)
	{
		cout << "IMPOSSIBLE";
	} else {
		cout << result;
	}
	
	return 0;
}
