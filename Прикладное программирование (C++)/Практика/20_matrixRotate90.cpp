#include <iostream>

int** rotate90ByClockwise(int **array, int size)
{
	int previous = 0;
	
	for(int i = 0; i < size / 2; i++) 
	{
        for(int j = i; j < size - i - 1; j++) 
		{
			previous = array[i][j];

            array[i][j] = array[size - 1 - j][i];
            array[size - 1 - j][i] = array[size - 1 - i][size - 1 - j];
            array[size - 1 - i][size - 1 - j] = array[j][size - 1 - i];
            array[j][size - 1 - i] = previous;
		}
	}
	
	return array;
}

using namespace std;

int main()
{
	int sizeofArray, previous = 0;
    cin >> sizeofArray;
    
    int **array = new int *[sizeofArray];
    
    for(int i = 0; i < sizeofArray; i++) {
        array[i] = new int [sizeofArray];
    }
    
    for(int i = 0; i < sizeofArray; i++) 
	{
        for(int j = 0; j < sizeofArray; j++) 
		{
            cin >> array[i][j];
        }
    }
    
    array = rotate90ByClockwise(array, sizeofArray);
    
    for(int i = 0; i < sizeofArray; i++) 
	{
        for(int j = 0; j < sizeofArray; j++) 
		{
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < sizeofArray; i++) 
	{
        delete[] array[i];
    }
    delete[] array;
	
	return 0;
}
