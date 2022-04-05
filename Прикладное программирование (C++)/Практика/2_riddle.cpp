#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cin >> number;
	
	if (number % 2 == 0 or number <= 1)
	{
		cout << "Wrong number";
	} else {
		cout << (number * number) - (number - 1) * 2;
	}
	return 0;
}
