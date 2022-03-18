#include <iostream>

using namespace std;
 
int main()
{
	int n = 0;	
	cin >> n;
	
    int arr[n][n];
 
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i <= row; i++)
        {
	        if (row == i || i == 0)
	        {
	        	arr[row][i] = 1;
			} else {
				arr[row][i] = arr[row - 1][i - 1] + arr[row - 1][i];
			}
	        cout << arr[row][i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
