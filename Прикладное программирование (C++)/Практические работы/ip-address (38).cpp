#include <iostream>
#include <string>

using namespace std;

bool countParts(string ip)
{
	bool valid = true;
	
	int count = 0;
	for (int i = 0; i <= ip.size(); i++)
	{
		if (ip[i] == '.')
		{
			count++;
		}
	}
	
	if (count > 3)
	{
		valid = false;
		cout << "Too many parts" << endl;
	} else if (count < 3) {
		valid = false;
		cout << "Incorrect parts count" << endl;
	}
	
	return valid;
}

bool isValidIP(string ip)
{
	size_t address = 0;
	
	bool valid = true;
	int size = ip.size();
	
	if (size == 0)
	{
		valid = false;
		cout << "No value" << endl;
		return valid;
	}
	
	int value = stoi(ip, &address, 10);
	
	if (size > 3)
	{
		valid = false;
		cout << "Too many characters in a part" << endl;
	} else if (value > 255) {
		valid = false;
		cout << "Too big a value of a part" << endl;
	} else if (value < 0) {
		valid = false;
		cout << "Incorrect parts count" << endl;
	}
	
	if (address != size)
	{
		valid = false;
		cout << "Only digits and dots allowed" << endl;
	}
	
	return valid;
}

int main()
{
	bool valid = true;

	string ip;
	getline(cin, ip);
	int first = 0, i = 0;
	if (!countParts(ip))
	{
		valid = false;
	}
	
	while (i <= ip.size())
	{
		if (ip[i] == '.' || i == ip.size())
		{
			if (!isValidIP(ip.substr(first, i - first)))
			{
				valid = false;
			}
			first = i + 1;
		}
		i++;
	}
	
	if (valid)
	{
		cout << "Correct IP" << endl;
	}
	
	return 0;
}

