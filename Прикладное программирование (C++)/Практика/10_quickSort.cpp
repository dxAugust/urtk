#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void showVector(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int* addElement(int array[], int size, int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}

	newArray[size] = value;
	delete[] array;

	return newArray;
}

void quickSort(int numbers[], int left, int right) 
{
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = numbers[left];
	while (left < right) 
	{
		while ((numbers[right] >= pivot) && (left < right)) 
		{
			right--;
		}
		if (left != right) 
		{
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] <= pivot) && (left < right)) 
		{
			left++;
		}
		if (left != right) 
		{
			numbers[right] = numbers[left];
			right--;
		}
	}
	
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	
	if (left < pivot) 
	{
		quickSort(numbers, left, pivot - 1);
	}
	
	if (right > pivot) 
	{
		quickSort(numbers, pivot + 1, right);
	}
}

int main()
{
	srand(time(NULL));
	
	int countofStones;
	cout << "Enter count of Stones: ";
	cin >> countofStones;

	int* stoneWeights = new int[countofStones];
	
	for (int i = 0; i < countofStones; i++)
	{
		stoneWeights[i] = rand() % 101;
	}

	quickSort(stoneWeights, 0, countofStones - 1);

	int* firstHeap = 0;
	int weightOnFirstHeap = 0;
	int stonesInFirstHeap = 0;

	int* secondHeap = 0;
	int weightOnSecondHeap = 0;
	int stonesInSecondHeap = 0;

	for (int i = countofStones - 1; i >= 0; i--)
	{
		if (weightOnFirstHeap <= weightOnSecondHeap)
		{
			firstHeap = addElement(firstHeap, stonesInFirstHeap, stoneWeights[i]);
			weightOnFirstHeap += stoneWeights[i];
			stonesInFirstHeap += 1;
		}
		else
		{
			secondHeap = addElement(secondHeap, stonesInSecondHeap, stoneWeights[i]);
			weightOnSecondHeap += stoneWeights[i];
			stonesInSecondHeap += 1;
		}
	}

	cout << "First heap: ";
	showVector(firstHeap, stonesInFirstHeap);
	cout << "Weight of first heap: " << weightOnFirstHeap << endl << endl;

	cout << "Second heap: ";
	showVector(secondHeap, stonesInSecondHeap);
	cout << "Weight of second heap: " << weightOnSecondHeap << endl << endl;
	
	double ratio = (double)(weightOnFirstHeap / weightOnSecondHeap);
	if (ratio > 2 || ratio < 0.5)
	{
		cout << "Weights of heaps are different more than 2 times";
	}


	/* cleaning up the memory */
	delete[] stoneWeights;
	delete[] firstHeap;
	delete[] secondHeap;

	return 0;
}
