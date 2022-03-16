#include <iostream>
#include <vector>

using namespace std;

template<typename T, size_t N>
size_t size(const T(&)[N]) 
{
    return N;
}

int main()
{
	int arr[] = {50, 20, 10, 5, 1};
    vector<int> banknotes(arr, arr+size(arr));
	
	
	int n, num;
	
	cin >> n;
 
 	if (n > 0)
 	{
	    for (int i = 0; i < 5; i++)
	    {
	        for (int j = 0; j < (n / banknotes[i]); j++)
	        {
	        	cout << banknotes[i] << " ";
			}
			n %= banknotes[i];
	    }
	} else {
		cout << "Wrong number" << endl;
	}
}
