#include <iostream>

using namespace std;

int main()
{
	int n = 0, i = 0;
    double x = 1.0;
    
    cin >> n;
    
    if (n < 0 || n > 63) 
	{
        cout << "Wrong number";
    } else {
        for (i = 0; i < n; i++)
		{
            x /= 2.0;
        }
        cout.setf(ios::fixed);
        cout.precision(20);
        cout << x;
    }
	
	return 0;
}
