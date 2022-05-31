#include <iostream>
#include <string>
using namespace std;

int main(){
	string input = "", temp = "";
	string key = "", temp2 = "", exitStr = "";
		
	getline(cin, input);
	getline(cin, key);
	int exit = 0, count = 0;
	for(int i = 0; i < input.size(); i++){
		count++;
		exit = (int)input[i] - 64;
		if(exit < 1 || exit > 26){
			exit = 0;
		} 
		temp += to_string(exit / 10); 
		temp += to_string(exit % 10);
		if(count == key.size() && input.size() - 1 != i){
			temp += " ";
			count = 0;
		}
	}
	count = 0;
	
	
	for(int i = 0; i < input.size(); i++){
		count++;
		exit = (int)key[count - 1] - 64;
		if(exit < 1 || exit > 26){
			exit = 0;
		} 
		temp2 += to_string(exit / 10); 
		temp2 += to_string(exit % 10);
		if(count == key.size() && input.size() - 1 != i){
			temp2 += " ";
			count = 0;
		}
	}
	
	count = 0;
	exit = 0;
	
	
	for(int i = 0; i < input.size(); i++){
		count++;
		if(stoi(temp2.substr((i * 2) + exit, 2)) + stoi(temp.substr((i * 2) + exit, 2)) <=26){
			exitStr += 	stoi(temp2.substr((i * 2) + exit, 2)) + stoi(temp.substr((i * 2) + exit, 2)) + 64;
		}else if((stoi(temp2.substr((i * 2) + exit, 2)) + stoi(temp.substr((i * 2) + exit, 2)) == 0 || stoi(temp2.substr((i * 2) + exit, 2)) + stoi(temp.substr((i * 2) + exit, 2)) == 27) && input.size() - 1 != i){
			exitStr += " ";
		}else{
			exitStr += 	stoi(temp2.substr((i * 2) + exit, 2)) + stoi(temp.substr((i * 2) + exit, 2)) + 64 - 27;
		}
		if(count == key.size()){
			count = 0;
			exit++;		
		}
		
	}
	cout << exitStr;
	return 0;
}

