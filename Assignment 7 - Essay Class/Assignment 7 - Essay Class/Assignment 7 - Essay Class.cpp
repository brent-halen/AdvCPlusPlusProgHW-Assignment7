// Assignment 7 - Essay Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Essay.h"
using namespace std;


int main()
{
	char again = 'y';
	Essay report;
	double points;
	do{
		// Ask for the Grammar points and validate the input. 
		cout << "Please enter the # of Grammar points the student was awarded (0-30).\n>>>>>>>>    ";
		cin >> points;
		while(points<0||points>30)
		{
			cout << "ERROR! Invalid input.\nPlease enter a value from 0 to 30.\n>>>>>>>>    ";
			cin >> points;
		}
		report.setGrammarPoints(points);
		// Ask for the spelling points and validate the input.
		cout << "Please enter the # of Spelling points the student was awarded (0-20).\n>>>>>>>>    ";
		cin >> points;
		while(points<0||points>20)
		{
			cout << "ERROR! Invalid input.\nPlease enter a value from 0 to 20.\n>>>>>>>>    ";
			cin >> points;
		}
		report.setSpellingPoints(points);
		// Ask for the points for essay length and validate the input. 
		cout << "Please enter the # of points the student was awarded for essay length (0-20).\n>>>>>>>>    ";
		cin >> points;
		while(points<0||points>20)
		{
			cout << "ERROR! Invalid input.\nPlease enter a value from 0 to 20.\n>>>>>>>>    ";
			cin >> points;
		}
		report.setLengthPoints(points);
		// Ask for the points awarded for content and validate the input. 
		cout << "Please enter the # of content points the student was awarded (0-30).\n>>>>>>>>    ";
		cin >> points;
		while(points<0||points>30)
		{
			cout << "ERROR! Invalid input.\nPlease enter a value from 0 to 30.\n>>>>>>>>    ";
			cin >> points;
		}
		report.setContentPoints(points);

		// Display essay scores & final grade.
		cout << "\nThe # of Grammar points awarded was: " << report.getGrammarPoints();
		cout << "\nThe # of Spelling points awarded was: " << report.getSpellingPoints();
		cout << "\nThe # of length points awarded was: " << report.getLengthPoints();
		cout << "\nThe # of content points awarded was: " << report.getContentPoints(); 
		cout << "\nThe total # of points earned was: " << report.getScore();
		cout << "\nThe letter grade is: " << report.getLetterGrade() << endl;
		system("pause");

		// Query the user to see if they would like to repeat the program. 
		cout << "\n\nWell, that was fun.\nWould you like to run the program again? (enter 'y' for 'yes' and any other input for 'no')\n\n>>>>>>   ";
		cin >> again;
		// Clear the console if they wish to repeat the program. 
		if (tolower(again) == 'y')
			system("cls");
	// Close the while loop. 
	}while(tolower(again)=='y');
	return 0;
}

