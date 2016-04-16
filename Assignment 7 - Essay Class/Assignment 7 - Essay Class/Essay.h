#ifndef ESSAY_H
#define ESSAY_H
#include "stdafx.h"
#include "GradedActivity.h"

// Declare Essay class as derived from GradedActivity class.
class Essay : public GradedActivity
{
private:
	// Declare double variables to hold the grades for various criteria.
	double grammarPoints;
	double spellingPoints;
	double lengthPoints;
	double contentPoints;

public:
	// Default constructor function
	Essay()
	{ grammarPoints = 0.0; spellingPoints = 0.0; lengthPoints = 0.0; contentPoints = 0.0; }
	// Mutator functions
	void setGrammarPoints(double);
	void setSpellingPoints(double);
	void setLengthPoints(double);
	void setContentPoints(double);

	// Accessor Functions
	double getGrammarPoints() const
	{ return grammarPoints; }
	double getSpellingPoints() const
	{ return spellingPoints; }
	double getLengthPoints() const
	{ return lengthPoints; }
	double getContentPoints() const
	{ return contentPoints; }
	// Set virtual functions to be utilized by this class. 
	virtual double getScore();
	virtual char getLetterGrade();
};
#endif