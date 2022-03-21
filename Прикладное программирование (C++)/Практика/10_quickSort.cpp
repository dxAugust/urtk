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
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int countofStones;
	cout << "Введите кол-во камней: ";
	cin >> countofStones;

	int* stoneWeights = new int[countofStones];
	
	for (int i = 0; i < countofStones; i++)
	{
		stoneWeights[i] = rand() % 1000;
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

	cout << "Первая куча: ";
	showVector(firstHeap, stonesInFirstHeap);
	cout << "Масса первой кучи: " << weightOnFirstHeap << endl << endl;

	cout << "Вторая куча: ";
	showVector(secondHeap, stonesInSecondHeap);
	cout << "Масса второй кучи: " << weightOnSecondHeap << endl << endl;

	delete[] stoneWeights;
	delete[] firstHeap;
	delete[] secondHeap;

	return 0;
}
