#include "stdafx.h"
#include <iostream> 
#include "Essay.h" 
using namespace std;
// Define function to validate grammar points and assign to variable if valid.
void Essay::setGrammarPoints(double p)
{
	// Input validation
	if (p < 0 || p > 30)
	{
		cout << "ERROR! INVALID POINT VALUE PASSED TO GRAMMAR.\n";
		exit(EXIT_FAILURE);
	}
	// Assign points
	grammarPoints = p;
}
// Define function to validate spelling points and assign to variable if valid.
void Essay::setSpellingPoints(double p)
{
	// Input validation
	if (p < 0 || p > 30)
	{
		cout << "ERROR! INVALID POINT VALUE PASSED TO SPELLING.\n";
		exit(EXIT_FAILURE);
	}
	// Assign points
	spellingPoints = p;
}
// Define function to validate Length points and assign to variable if valid.
void Essay::setLengthPoints(double p)
{
	// Input validation
	if (p < 0 || p > 30)
	{
		cout << "ERROR! INVALID POINT VALUE PASSED TO LENGTH.\n";
		exit(EXIT_FAILURE);
	}
	//Assign points
	lengthPoints = p;
}
// Define function to validate content points and assign to variable if valid.
void Essay::setContentPoints(double p)
{
	// Input validation
	if (p < 0 || p > 30)
	{
		cout << "ERROR! INVALID POINT VALUE PASSED TO GRAMMAR.\n";
		exit(EXIT_FAILURE);
	}
	// Assign points
	contentPoints = p;
}

// define getScore function to determine final grade.
double Essay::getScore()
{
	return grammarPoints + spellingPoints + lengthPoints + contentPoints;
}

// define getLetterGrade function to pull the lettergrade using inheritance from the GradedActivity function. 

char Essay::getLetterGrade()
{
	//Total the points.
	score = getScore();
	//Return letter grade from GradedActivity function. 
	return GradedActivity::getLetterGrade();
}
