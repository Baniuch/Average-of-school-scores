#include "functions.h"
#include <iostream>

using namespace std;

float averageOfSubjects(int ** subject, int subj, int score)
{
	float average;
	for(int i = 0; i < score; i++)
	{
		average = average + subject[subj][i];
	}
	return average / score;
}

void averageOfYear(float* subjects, int numOfSub)
{
	float average;
	for(int i = 0; i < numOfSub; i++)
	{
		average = average + subjects[i];
	}
	cout << "Srednia roku wynosi: " << average / numOfSub << endl;
}
