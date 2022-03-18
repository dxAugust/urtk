#include <iostream>

using namespace std;

int main() 
{
    const int N = 100;
    int r[N], k;
    cin >> k;
 
    r[0] = 1; 
	for (int i=1; i < N; i++) 
	{
		r[i]=0;
	}
	
    for (int j = 0; j < k; j++) 
	{
		for (int i = N; i > 0; i--)
		{
			r[i] += r[i-1];
		}
	}
	
    for (int i = 0; i < (k + 1); i++)
    {
    	if (i == k)
    	{
    		cout << r[i] << " ";
		} else {
			cout << r[i] << ", ";
		}
	}
	
    return 0;
}
