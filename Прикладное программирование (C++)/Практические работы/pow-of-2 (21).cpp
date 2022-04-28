#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i;
    double x = 1;
    
    cin >> n;
    
    if (n < 0 || n > 63) 
	{
        cout << "Wrong number";
    } else {
        for (i = 0; i < n; i++)
		{
            x *= 2;
        }
        cout.setf(ios::fixed);
        cout.precision(0);
        cout << x;
    }
    return 0;
}
