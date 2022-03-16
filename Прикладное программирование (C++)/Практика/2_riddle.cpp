#include <iostream>
using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	if (n % 2 == 0 or n <= 1)
	{
		cout << "Wrong number";
	} else {
		cout << (n * n) - (n - 1) * 2;
	}
	return 0;
}
