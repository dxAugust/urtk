#include <iostream>

using namespace std;

int main()
{
	bool isPalindrome = true;
	
    int vectorSize;
    cin >> vectorSize;

    if (vectorSize <= 0)
    {
        cout << "Wrong size" << endl;
    } else {
	    int* vector = new int[vectorSize];
	
	    int middleIndex = vectorSize / 2;
	
	    for (int i = 0; i < vectorSize; i++)
	    {
	        cin >> vector[i];
	
	        if (i >= middleIndex && isPalindrome)
	        {
	            int mirrorIndex = vectorSize - 1 - i;
	            if (vector[i] != vector[mirrorIndex])
	            {
	                isPalindrome = false;
	            }
	        }
	    }
	}
	
	if (isPalindrome)
	{
		cout << "It is a palindrome";
	} else {
		cout << "It is not a palindrome";
	}

    return 0;
}
