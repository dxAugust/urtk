#include <iostream>

using namespace std;

void recursion(int p)
{
	for (int i = 1; i <= p; i++)
	{
		cout << i << " ";
	}
}

int main()
{
	bool flag;
	int end;
	
	cout << "Enter the limit of the recursive function: ";
	cin >> end;
	
	do {
		if (end != 0 && end != 1)
		{
			recursion(end);
			flag = false;
		} else {
			cout << "Number should be bigger than 1" << endl;
			cin >> end;
			flag = true;
		}
	} while (flag != false);
	
	return 0;
}
