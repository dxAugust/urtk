#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string time;
	string addTime;
	
	cin >> time >> addTime;
	
	int second = stoi(time.substr(6));
	int minute = stoi(time.substr(3, 2));
	int hour = stoi(time.substr(0, 2));
	int index = 0, count = 0;
	
	while(addTime.find(':', index) != string::npos)
	{
		index = addTime.find(':', index);
		index++;
		count++;
	}
	
	index = 0;
	int indexTwo = 0;
	int addSecond = 0, addMinute = 0, addHour = 0; 
	
	if (count == 0)
	{
		addSecond = stoi(addTime);	
	}
	
	if (count == 1)
	{
		index = addTime.find(':', index);
		addMinute = stoi(addTime.substr(0, index));
		addSecond = stoi(addTime.substr(++index));
	}
	
	if (count == 2)
	{
		index = addTime.find(':', index);
		addHour = stoi(addTime.substr(0, index));
		indexTwo = addTime.find(':', ++index);
		addMinute = stoi(addTime.substr(index, indexTwo - index));
		addSecond = stoi(addTime.substr(++indexTwo));
	}
	
	second += addSecond;
	minute += addMinute;
	hour += addHour;
	
	int temp = 0;
	if (second >= 60)
	{
		temp = second / 60;
		minute += temp;
		second = second - temp * 60;
	}
	if (minute >= 60)
	{
		temp = minute / 60;
		hour += temp;
		minute = minute - temp * 60;
	}
	int days = 0;
	if(hour >= 24)
	{
		temp = hour / 24;
		days = temp;
		hour = hour - temp * 24;		
	}
	cout.fill('0');
	cout.width(2);
	cout << hour << ":";
	cout.width(2);
	cout << minute << ":";
	cout.width(2);
	cout << second;
	
	if(days)
	{
		cout << "+" << days << " days";
	}	
	return 0;
}

