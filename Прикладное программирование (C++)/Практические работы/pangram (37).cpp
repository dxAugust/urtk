#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	int* letterCount = new int[alphabet.size()];
	int count = 0;
	
	string pangram = "";
	getline(cin, pangram);
	
	/* Converting whole string to lower case */
	for(int i = 0; i < pangram.length(); i++)
	{
        if(pangram[i] >= 'A' && pangram[i] <= 'Z')
		{    
            pangram[i] = (char)(pangram[i]-'A'+'a'); 
        }
    }
	
	/* Getting count of all letters from sentence */
	for (int i = 0; i < alphabet.size(); i++)
	{
		for (int j = 0; j < pangram.size(); j++)
		{
			if (pangram[j] == alphabet[i])
			{
				count++;
			}
			
			letterCount[i] = count;
		}
		
		count = 0;
	}
	
	
	/* Checking the sentence on pangramism */
	for (int i = 0; i < alphabet.size(); i++)
	{
		if (letterCount[i] >= 1)
		{
			if (i == alphabet.size() - 1)
			{
				cout << "Pangram" << endl;
			}
		} else {
			cout << "Not pangram" << endl;
			break;
		}
	}
	
	
	/* Printing count of all letters */
	for (int i = 0; i < alphabet.size(); i++)
	{
		cout << alphabet[i] << "-" << letterCount[i] << endl;
	}
	
	delete[] letterCount;
	
	return 0;
}
