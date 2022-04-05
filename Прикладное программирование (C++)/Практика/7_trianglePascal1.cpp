#include <iostream>
using namespace std;

void pascal(int number) 
{
    int currentElement = 1;
    cout << currentElement;
    
    for (int i = 1; i <= number; i++) 
	{
        currentElement *= (number - i + 1);
        currentElement /= i;
        cout << ", " << currentElement;
    }
}

int main() 
{
    int number;
    cin >> number;
    
    pascal(number);
    
    return 0;
}
