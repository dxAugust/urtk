#include <iostream>

using namespace std;

long long int getPlantsCount(int yearsCount)
{
	const int AGE = 20;
	
	long long int p1 = 1, p2 = 0, p3 = 0, plantsCount = 0;
	long long int f1 = 0, f2 = 0, f3 = 0, deadCount = 1; 
	
	for (int i = 1; i <= yearsCount; i++)
	{
		p3 = p2;
		p2 = p1;
		p1 = plantsCount;
			
		if (i > 22)
		{			
			f3 = f2;
			f2 = f1;
			f1 = deadCount;
			deadCount = f1 + f3;
			plantsCount = p1 + p3 - deadCount;
		} else {
			plantsCount = p1 + p3;
			
			if (i > AGE)
			{
				plantsCount--;
			}
		}	
	}
	
	return plantsCount;
}

int main()
{
	int years;
	
	cin >> years;
	
	if (years > 1 && years < 100)
	{
		cout << getPlantsCount(years);
	} else {	
		cout << "Wrong number";
	}
	return 0;
}
