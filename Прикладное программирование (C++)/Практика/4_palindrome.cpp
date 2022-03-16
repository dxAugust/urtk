#include <iostream>

using namespace std;

int main()
{
    unsigned short int x;
    int arr[16], j = 0, count = 0;
    
    cin >> x;
    
    cout << x;
    
    for (int i = 0; i < 16; i++)
    {
        arr[i] = x % 2;
        x /= 2;
    }

    for (int i = 15; i > 7; i--)
    {
        if (arr[j] == arr[i])
        {
        	count += 1;
		}
        j++;
    }
    
    if (count == 8)
    {
    	cout << " is a bitwise palindrome" << endl;
	} else {
		cout << " is not a bitwise palindrome" << endl;
	}
    return 0;
}
