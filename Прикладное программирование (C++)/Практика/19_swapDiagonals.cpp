#include <iostream>

int** swapDiagonals(int **array, int size)
{
	int previous = 0;
	
	for(int i = 0; i < size; i++) 
	{
        for(int j = 0; j < size; j++) 
		{
			if (i == j)
			{
				previous = array[i][j];
				array[i][j] = array[size - i - 1][j];
				array[size - i - 1][j] = previous;
			}
		}
	}
	
	return array;
}

using namespace std;

int main()
{
	int n, previous = 0;
    cin >> n;
    
    int **array = new int *[n];
    
    for(int i = 0; i < n; i++) {
        array[i] = new int [n];
    }
    
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            cin >> array[i][j];
        }
    }
    
    array = swapDiagonals(array, n);
    
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < n; i++) 
	{
        delete[] array[i];
    }
    delete[] array;
	
	return 0;
}

