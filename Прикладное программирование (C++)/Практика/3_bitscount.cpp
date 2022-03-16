#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int dec;
	int count = 0;
	
	cin >> dec;
	
    for(int j = 0; dec > 0; j++)
    {
		if ((dec % 2) == 1)
		{
			count += 1;
		}
	
        dec /= 2;
    }
    
    cout << count;
	
	return 0;
}
