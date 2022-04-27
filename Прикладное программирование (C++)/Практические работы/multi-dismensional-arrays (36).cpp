#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	
	int students = 0, gradesCount = 0;
	
	cout << "Enter count of rows: ";
	cin >> students;
	
	int **grades = new int*[students];
	
	for (int i = 0; i < students; i++)
	{
		cin >> gradesCount;
		
		grades[i] = new int[gradesCount];
		grades[i][0] = gradesCount;
		
		for (int j = 1; j <= gradesCount; j++)
		{
			cin >> grades[i][j];
		}
	}
	
	double overallSummary = 0;
	double countOfAllGrades = 0;
	
	for (int i = 0; i < students; i++)
	{
		int courceGrades = grades[i][0];
		double gradesSummary = 0;
		
		countOfAllGrades += grades[i][0];
		
		for (int j = 1; j <= courceGrades; j++)
		{
			gradesSummary += grades[i][j];
		}
		
		cout << "Course " << i + 1 << ":" << " final" << " " << gradesSummary / courceGrades;
    	cout << ", grades:";
    	
    	overallSummary += gradesSummary / courceGrades;
    	
    	for (int j = 1; j <= courceGrades; j++)
		{
        	cout << " " << grades[i][j];
    	}
    	cout << endl;
	}
	
	cout << "Overall final " << overallSummary / students;
	
	/* Clearing up the memory */
	for (int i = 0; i < students; i++)
	{
        delete[] grades[i];
	}
	
	return 0;
}
