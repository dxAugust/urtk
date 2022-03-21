#include <iostream>
using namespace std;
int main()
{
    int vector[9];
    int n = sizeof(vector) / sizeof(vector[0]);
    int min = 99999999999999;
    int* minIndex = 0;
    
    for (int i = 0; i < n; i++) 
	{
        int* enter = vector + i;
        cin >> *enter;
        if (*enter < min) 
		{
            min = *enter;
            minIndex = enter;
        }
    }
    
    cout << min << endl << minIndex - vector << endl;
    
    return 0;
}
