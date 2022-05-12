#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number;
	cin >> number;
	
	if (number == string(number.size(), '9'))
	{
		number = "1" + string(number.size(), '0');
	} else {
		number[number.size() - 1] += 1;
		for (int i = number.size() - 1; i > 0; i--)
		{
			if (number[i] <= '9')
			{
				break;
			}
			number[i] = 0;
			number[i - 1] += 1;
		}
	}
	
	for (int i = 0; i < number.size() / 2; i++)
	{
		int ends = number.size() - 1 - i;
		if (number[ends] > number[i])
		{
			number[ends - 1] += 1;
			for (int j = ends - 1; j > 0; j--)
			{
				if (number[j] <= '9')
				{
					break;
				}
				number[j] = 0;
				number[j - 1] += 1;
			}
		}
		number[ends] = number[i];
	}
	
	cout << number;
	
	return 0;
}
