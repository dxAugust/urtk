#include <iostream>

using namespace std;
 
void pascal(int number) 
{
    int currentElement = 0, countRows = 0;
    
    for (int countRows = 0; countRows < number; countRows++)
    {
    	currentElement = 1;
	    cout << currentElement;
	    
	    for (int i = 1; i <= countRows; i++) 
		{
	        currentElement *= (countRows - i + 1);
	        currentElement /= i;
	        cout << " " << currentElement;
	    }
	    cout << endl;
	}
} 

int main()
{
	int number;
    cin >> number;
    
    pascal(number);
    
    return 0;
}
