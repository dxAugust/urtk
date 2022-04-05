#include <iostream>

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
	
	for(int i = 0; i < sizeofArray / 2; i++) 
	{
        for(int j = i; j < sizeofArray - i - 1; j++) 
		{
			previous = array[i][j];

            array[i][j] = array[sizeofArray - 1 - j][i];
            array[sizeofArray - 1 - j][i] = array[sizeofArray - 1 - i][sizeofArray - 1 - j];
            array[sizeofArray - 1 - i][sizeofArray - 1 - j] = array[j][sizeofArray - 1 - i];
            array[j][sizeofArray - 1 - i] = previous;
		}
	}
    
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
