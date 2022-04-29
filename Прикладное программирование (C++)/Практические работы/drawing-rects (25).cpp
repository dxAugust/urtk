#include <iostream>

using namespace std;

int main()
{
    int size = 0;

    cin >> size;

    if (size <= 1)
    {
    	cout << "Wrong number";
    	return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == size - 1)
        {
            cout << "+";
        } else {
            cout << "-";
        }
    }
    cout << endl;

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == 0 || j == size - 1)
            {
                cout << "|";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == size - 1)
        {
            cout << "+";
        } else {
            cout << "-";
        }
    }

    return 0;
}
