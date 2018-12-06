#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	int numOfSubjects, numOfScores;
	
	cout << "Podaj liczbe przedmiotow ";
	cin >> numOfSubjects;
	int ** scores = new int * [numOfSubjects];
	float * averages = new float [numOfSubjects];
	
	
	for(int i = 0; i<numOfSubjects; i++)
	{
		cout << "Podaj ilosc ocen z przedmiotu numer " << i+1 << " ";
		cin >> numOfScores;
		scores[i] = new int [numOfScores];
		
		cout << "Wprowadz oceny:\n";
		for(int j = 0; j<numOfScores; j++)
		{
			cout << j+1 << ". ";
			cin >> scores[i][j];
		}
		
		averages[i] = averageOfSubjects(scores, i, numOfScores);
	}
	
	cout << "Srednie z przedmiotow:\n";
	for(int i = 0; i<numOfSubjects; i++)
	{
		cout << i+1 << ".\t" << averages[i] << endl;
	}
	
	cout << "Srednia roczna:\n";
	averageOfYear(averages, numOfSubjects);

	return 0;
}
