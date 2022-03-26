#include <iostream>

using namespace std;

int main()
{
	int banknotes[] = {50, 20, 10, 5, 1};
	
	int needMoney;
	
	cin >> needMoney;
 
 	if (n > 0)
 	{
	    for (int i = 0; i < 5; i++)
	    {
	        for (int j = 0; j < (needMoney / banknotes[i]); j++)
	        {
	        	cout << banknotes[i] << " ";
			}
			needMoney %= banknotes[i];
	    }
	} else {
		cout << "Wrong number" << endl;
	}
}
