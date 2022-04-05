#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 1000;
	long long int array[ARRAY_SIZE], generated = 0;
	int i = 0, count = 0;
	
	bool change = false, alreadyExist = false;
	
	srand(time(NULL));
	
	cout << "Source Array: \n";
	while (i < ARRAY_SIZE)
	{
		alreadyExist = false;
		
		generated = rand() % 65534 - 32767;
		
		for(int j = 0; j < i; j++)
		{
			if(array[j] == generated)
			{
				alreadyExist = true;
			}
		}
		
		if(!alreadyExist)
		{
			array[i] = generated;
			i++;
		}
	}
	
	/* Printing the source array */
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << array[i] << "\t";
	}
	
	for (int j = 0; j < ARRAY_SIZE - 1; j++) 
	{
		change = false;
		
		for(int k = 0; k < ARRAY_SIZE - j - 1; k++)
		{
			if (array[k] > array[k + 1]) 
			{
				change = true;
				long long int temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				count++;
			}
		}
		
		if(!change)
		{ 
			break;
		}
	}
	
	/* Printing the sorted array */
	cout << "\nSorted Array: \n";
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << array[i] << "\t";
	}
	
	cout << "\nCount of permutations: " << count;
	
	return 0;
}

