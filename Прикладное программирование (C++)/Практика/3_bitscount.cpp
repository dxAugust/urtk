#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int x;
	cin >> x;
	
	int count = 0;
	
	int size = sizeof(unsigned int) * 8;

	for (int i = 0; i < size; i++)
	{
		unsigned int dec = x >> i;
		
		if (!dec)
		{
			break;
		} else {
			if (dec & 1)
			{
				count += 1;
			}
		}
	}
    
    cout << count;
	
	return 0;
}
