#include <iostream>
using namespace std;

int main()
{
  	bool flag = true;
  	double net, taxVal, price, tax;
  	cin >> price >> tax;
  	
	if (price <= 0)
    {
      cout << "Price can not be less then 0\n";
      flag = false;
    }  
    if (tax <= 0)
	{
        cout << "Tax can not be less or equal 0\n";
        flag = false;
    }
  	if (tax >= 100)
	{
      cout << "Tax can not be more or equal 100";
      flag = false;
    }
    if (flag)
	{
      net = price / (100 + tax) * 100; 
      taxVal = price - net;
      cout << "Net price: " << net << endl << "Tax value: " << taxVal;
  	}
    return 0;
}

