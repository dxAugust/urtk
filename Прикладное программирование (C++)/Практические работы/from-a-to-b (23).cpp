#include <iostream>

using namespace std;

void recursion(int a, int b)
{
	if (a <= b)
	{
		for (a; a <= b; a++)
		{
			cout << a << " ";
		}
	} else if (a >= b) {
		for (a; a >= b; a--)
		{
			cout << a << " ";
		}
	} else {
		cout << a << " ";
	}
}

int main()
{	
	int start = 0, end = 0;
	
	cout << "Enter the lower limit for recursive function: ";
	cin >> start;
	cout << "Enter the upper limit for recursive function: ";
	cin >> end;
	
	recursion(start, end);
	
	return 0;
}
