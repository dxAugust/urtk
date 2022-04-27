#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double e = 0.000001;
	int number1, number2;
	float value1, value2;
	
	cin >> number1 >> number2;
	
	value1 = 1 / (float)number1;
	value2 = 1 / (float)number2;
	
	if ((value1 - value2) <= e)
	{
		cout << value1 << " " << value2 << " " << "Results are equal (by 0.000001 epsilon)";
	} 
	else
	{
		cout << value1 << " " << value2 << " " << "Results are not equal (by 0.000001 epsilon)";
	}
	
	return 0;	
}

