#include <iostream>

using namespace std;

bool isMagicSquare(int **array, int size)
{
	int sum = size, sumRows = 0, sumCollumns = 0, sumDiagonals = 0;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum += size;
		}
		sumDiagonals += array[i][i];
	}
	
	sum /= 2;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sumRows += array[i][j];
			sumCollumns += array[j][i];
		}
		
		if (sumRows != sum || sumCollumns != sum || sumDiagonals != sum)
		{
			return false;
			break;
		}
		
		sumRows = 0;
		sumCollumns = 0;
	}
	
	return true;
}

int main()
{
	int sizeofArray, previous = 0;
	
    cin >> sizeofArray;
    
    int **array = new int *[sizeofArray];
    
    for(int i = 0; i < sizeofArray; i++) 
	{
        array[i] = new int [sizeofArray];
    }
    
    for (int i = 0; i < sizeofArray; i++)
	{
		for (int j = 0; j < sizeofArray; j++)
		{
			cin >> array[i][j];
		}
	}
    
    if (isMagicSquare(array, sizeofArray))
    {
    	cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
    
    
    for(int i = 0; i < sizeofArray; i++) 
	{
        delete[] array[i];
    }
    delete[] array;
	
	return 0;
}
