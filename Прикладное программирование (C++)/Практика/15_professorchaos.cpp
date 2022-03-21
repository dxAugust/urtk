#include <iostream>
 
using namespace std;

int main() 
{
    int a, b, c, d, k;
 
    cin >> a >> b >> c >> d >> k;
 
    for (int i = 0; i < k; i++) 
	{
        a = a * b - c;
 
        if (a + c < c)
		{
            a = 0;
            break;
        }
        
        if (a > d)
        {
        	a = d;
		} else {
			a = a;
		}
    }
 
	cout << a;
 
    return 0;
}
