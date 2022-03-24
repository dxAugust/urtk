#include <iostream>

using namespace std;

int max(int** array, int size) 
{
    int max = array[0][0];
    
    for(int i = 0; i < size; i++) 
	{
        for(int j = 0; j < size; j++) 
		{
            if(array[i][j] > max && ((j >= i && j >= size - i - 1) || (j <= i && j <= size - i - 1))) 
			{
                max = array[i][j];
            }
        }
    }
    
    return max;
}

int main()
{
    int n;
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
    
    cout << max(array, n);
    
    for(int i = 0; i < n; i++) 
	{
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
