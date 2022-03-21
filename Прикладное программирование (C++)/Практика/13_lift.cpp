#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int m, n, k, x = 0, cost = 99999999;
	
	cin >> m >> n >> k;

	int floor = x * k + 1;
	
	while (floor <= m)
	{
		if (floor == n)
		{
			cost = 0;
			break;
		}

		int moveUp = (n - floor) * 200;
		int moveDown = (floor - n) * 100;

		if (moveUp < cost && moveUp > 0)
		{
			cost = moveUp;
		}
		else if (moveDown < cost && moveDown > 0)
		{
			cost = moveDown;
		}
		
		x++;
		
		floor = x * k + 1;
	}

	cout << cost << endl;

	return 0;
}
