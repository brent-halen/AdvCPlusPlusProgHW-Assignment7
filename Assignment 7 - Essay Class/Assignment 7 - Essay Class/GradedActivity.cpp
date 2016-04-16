#include "stdafx.h"
#include "GradedActivity.h"

// Define getLetterGrade function.

char GradedActivity::getLetterGrade() const
{
	char letterGrade; // store leter grade
	if(score>89)
		letterGrade='A';
	else if(score>79)
		letterGrade='B';
	else if(score>69)
		letterGrade='C';
	else if(score>59)
		letterGrade='D';
	else
		letterGrade='F';

	return letterGrade;
}