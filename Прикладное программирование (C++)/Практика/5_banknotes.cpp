#include <iostream>

using namespace std;

int main()
{
	int banknotes[] = {50, 20, 10, 5, 1};
	
	int n, num;
	
	cin >> n;
 
 	if (n > 0)
 	{
	    for (int i = 0; i < 5; i++)
	    {
	        for (int j = 0; j < (n / banknotes[i]); j++)
	        {
	        	cout << banknotes[i] << " ";
			}
			n %= banknotes[i];
	    }
	} else {
		cout << "Wrong number" << endl;
	}
}
