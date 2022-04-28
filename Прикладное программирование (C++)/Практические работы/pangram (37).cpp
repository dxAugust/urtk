#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	int letterCount[alphabet.size()];
	
	string pangram = "";
	string status = "Pangram";
	getline(cin, pangram);
	
	/* Getting count of all letters from sentence */
	for (int i = 0; i < alphabet.size(); i++)
	{
		letterCount[i] = 0;
		for (int j = 0; j < pangram.size(); j++)
		{
			if (tolower(pangram[j]) == alphabet[i])
			{
				letterCount[i]++;
			}
		}
	}
	
	
	/* Checking the sentence on pangramism */
	for (int i = 0; i < alphabet.size(); i++)
	{
		if (letterCount[i] == 0)
		{
			status = "Not pangram";
			break;
		}
	}
	
	cout << status << endl;
	
	/* Printing count of all letters */
	for (int i = 0; i < alphabet.size(); i++)
	{
		cout << alphabet[i] << "-" << letterCount[i] << endl;
	}
	
	return 0;
}
