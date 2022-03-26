#include <iostream>
using namespace std;
int main()
{
	unsigned short int value;
	cin >> value;
	const int BITS_IN_BYTES = 8;
	
	int count = sizeof(unsigned short int) * BITS_IN_BYTES;
	
	unsigned short int valueC = value, mirror = 0;
	for (int i = 0; i < count; i++)
	{
		if (value == 0)
		{
			break;
		}
		
		mirror = (valueC & 1) | mirror;
		
		if (i != (count - 1))
		{
			mirror <<= 1;
			valueC >>= 1;
		}
	}
		
	if (value == mirror)
	{
		cout << value << " is a bitwise palindrome";
	} else {
		cout << value << " is not a bitwise palindrome";
	}

	return 0;
}
