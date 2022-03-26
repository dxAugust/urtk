#include <iostream>
using namespace std;

int main()
{
	int n, topSum, rightSum, downSum, leftSum;
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
    
    for(int i = 0; i < n; i++) 
	{
        for(int j = 0; j < n; j++) 
		{
			/* top */
			if(i < j && j < n - i - 1) 
			{
                topSum += array[i][j];
            }
            
            /* right */
            if(i < j && j > n - i - 1) 
			{
                rightSum += array[i][j];
            }
			
			/* down */
			if(i > j && j > n - i - 1) 
			{
                downSum += array[i][j];
            }
			
			/* left */
            if(i > j && j < n - i - 1) 
			{
                leftSum += array[i][j];
            }
        }
    }
    
    cout << "top: " << topSum << endl;
    cout << "right: " << rightSum << endl;
    cout << "down: " << downSum << endl;
    cout << "left: " << leftSum;
    
    for(int i = 0; i < n; i++) 
	{
        delete[] array[i];
    }
    delete[] array;
	
	return 0;
}

