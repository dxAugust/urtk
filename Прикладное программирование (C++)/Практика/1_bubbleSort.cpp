#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int array[1000], count = 0;
	
	srand(time(NULL));
	
	cout << "Список: |";
	for (int i = 0; i < 1000; i++)
	{
		array[i] = (-10000000000) + rand() % (10000000000 - (-10000000000));
		
		if (i != 0 && (array[i - 1] == array[i]))
		{
			array[i] = (-10000000000) + rand() % (10000000000 - (-10000000000));
		}
		
		cout << array[i] << "|";
	}
	
	
	cout << "\nОтсортированный список: |";
	for (int j = 0; j < 999; j++) 
	{
		if (array[j] > array[j + 1]) 
		{
			int b = array[j];
			array[j] = array[j + 1];
			array[j + 1] = b;
			count += 1;
		}
		
		cout << array[j] << "|";
	}
	
	cout << "\nКоличество перестановок: " << count;
	
	return 0;
}
