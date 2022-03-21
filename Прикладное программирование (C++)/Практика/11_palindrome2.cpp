#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    
    int size, j = 0, count = 0;
    cin >> size;
    
    if (size < 1 || size > 100) 
	{
        cout << "Wrong size";
    }
    else {
        int* array = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        for (int i = (size - 1); i > (size - 1) / 2; i--)
        {
            if (array[j] == array[i])
            {
                count += 1;
            }
            j++;
        }
        
        if (count == (size / 2)) {
            cout << "It is a palindrome";
        }
        else {
            cout << "It is not a palindrome";
        }
        
        delete[] array;
    }    
    return 0;
}
