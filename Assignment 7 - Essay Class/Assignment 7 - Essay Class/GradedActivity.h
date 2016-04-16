#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
#include "stdafx.h"
//Declare GradedActivity class
class GradedActivity
{
protected:
	double score;	//Numeric score.
public:
	// Default constructor
	GradedActivity()
	{ score = 0.0;}
	//Constructor
	GradedActivity(double s)
	{ score = s; }
	//Mutator
	void setScore(double s)
	{ score = s; }
	//Accessor
	virtual double getScore() const
	{ return score; }
	// Define virtual 'getLetterGrade' function for use in derived classes.
	// in this case, it will be the Essay class. 
	virtual char getLetterGrade() const;
};
#endif