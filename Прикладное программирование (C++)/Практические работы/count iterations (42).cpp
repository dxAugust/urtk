#include <iostream>

using namespace std;

int main() 
{
    int ind = 0, amount, num;
    string cycle;
    cin >> amount;
    double iterations[2 * amount] = {};
    if (amount < 11 && amount > 0) 
	{
        for (int i = 0; i < 2 * amount; i++) 
		{
            cin >> cycle;
            if (cycle == "for") 
			{
                do 
				{
                    cin >> num;
                } while (num > 1000 || num < 2);
                
                ind++;
                iterations[ind] = num;
                ind++;
                iterations[ind] = 0;
                
            } else if (cycle == "end") {
                if (iterations[ind] == 0) {
                    iterations[ind] = 1;
                }
                iterations[ind - 1] = iterations[ind - 1] * iterations[ind];
                ind--;
                iterations[ind - 1] = iterations[ind - 1] + iterations[ind];
                ind--;
            }
        }
        cout.precision(21);
        cout << iterations[ind];
    }
    
    return 0;
}

