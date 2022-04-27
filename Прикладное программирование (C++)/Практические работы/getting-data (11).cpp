#include <iostream>

using namespace std;

int main()
{	
	int number1, number2, number3, number4;

	cin >> number1 >> number2 >> number3 >> number4;
	
	if ((number1 < 1) || (number1 > 255))
	{
	    cout << "First is not valid" << endl;
	}
    if ((number2 < 1) || (number2 > 255))
	{
		cout << "Second is not valid" << endl;
	}
	if ((number3 < 1) || (number3 > 255))
	{
		cout << "Third is not valid" << endl;
	}
	if ((number4 < 1) || (number4 > 255))
	{
		cout << "Fourth is not valid" << endl;
	}
    if (((number1 >= 1) && (number1 <= 255)) && ((number2 >= 1) && (number2 <= 255)) && ((number3 >= 1) && (number3 <= 255)) && ((number4 >= 1) && (number4 <= 255))) 
	{
		cout << number1 << "." << number2 << "." << number3 << "." << number4;
    }
	return 0;	
}

