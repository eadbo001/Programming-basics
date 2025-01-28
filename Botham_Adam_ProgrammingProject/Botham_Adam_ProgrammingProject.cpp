//Programmingproject - Botham Adam

//include iostream sourcecode(ex. cout and cin -functions)
#include <iostream>
//Windows.h is needed for the צהו letters in the Finnish language
#include <Windows.h>
#include <string>
#include <iomanip> //for output formatting

using namespace std;

//In C/C++ -programs functions have to be declared before defining them
void Part1();
void Part2();
void Part3();


//The main() function is the start of execution in every program and has to be included them:
int main()
{	
	int choosePart;
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	cout << "The program starts:" << endl;
	cout << "\n-------------------------\n" << endl;
	do
	{

	
	cout << "Choose which Part/Function to execute:" << endl << endl
		 << "1: Personal ID" << endl
		 << "2: Annual Study Grant" << endl
		 << "3: Choose between 2 functions" << endl	
		 << "9: Quit" << endl
		 << "Enter your choice: ";
	 cin >> choosePart;
	switch (choosePart) {
		case 1: {
			cout << "\n*** PART 1***" << endl;
			Part1();
			break;
		}
		case 2: {
			cout << "\n*** PART 2***" << endl;
			Part2();
			break;
		}
		case 3: {
			cout << "\n*** PART 3***" << endl;
			Part3();
			break;
		}
		case 9: {
			cout << "\nBYE BYE :)" << endl;
			break;
		}
		default: {
			cout << "\nInvalid choice :( Try again." << endl;
		}
	}
	} while (choosePart !=9);
	
	cout << "\n-------------------------\n" << endl;
	cout << "The program has ended and shutdown." << endl;
}

//Input asked info and outputs given info
void Part1()
{
	
	string name;
	int age;
	int studentNum;
	float height;
	float weight;

	
	

	cout << "Input the following:\nName: "; cin >> name;
	cout << "Age: "; cin >> age;
	cout << "Student number: "; cin >> studentNum;
	cout << "Height: "; cin >> height;
	cout << "Weight: "; cin >> weight;

	cout << "\nGiven info:\nName: " << name << "\nAge: " << age << "\nStudent ID: " << studentNum << "\nHeight: " << height << "\nWeight: " << weight << endl;	
}

//input grant months per year and amount and outputs annual grant amount
void Part2()
{
	int months;
	float grantAmount;
	float grantPerYear;
	cout << "\nStudy grant months per year\nMonths: "; cin >> months;
	cout << "Monthly grant amount: "; cin >> grantAmount;
	grantPerYear = months * grantAmount;
	cout << "Annual study grant amount: " << grantPerYear << "€" << endl;
}

void Part3()
{
	//making the ability to choose a function to do with a switch case
	int choice;

	cout << "\n1 - Convert Exam points to a grade\n2 - Convert distance from kilometers\n3 - Quit\nEnter your choice: ";
	cin >> choice;

	switch (choice) 
	{
	case 1: {
		//Function 1: Grades
		int points;
		cout << "\n*** Points to Grades ***";
		cout << "\nInsert exam points (0-100): "; cin >> points;

		if (points < 0 || points > 100) {
			cout << "\nInvalid points";
		}
		else {
			int grade;
			if (points >= 90) {
				grade = 5;				
				cout << "\nGrade" << grade;
				if (points == 100) { cout << "\nCongrats, you got full points!"; }
			}else if (points >= 80) {
				grade = 4;
				cout << "\nGrade" << grade;
			}else if (points >= 70) {
				grade = 3;
				cout << "\nGrade" << grade;
			}else if (points >= 60) {
				grade = 2;
				cout << "\nGrade" << grade;
			}else if (points >= 50) {
				grade = 1;
				cout << "\nGrade" << grade;
			}else {
				grade = 0;
				cout << "\nGrade" << grade;
			}

		}
	break;
	}
	case 2: {
		//Function 2: Convert Distance
		double kilometers;
		char option;
		cout << "\n*** Distance ***\nGive Distance in kilometres: ";
		cin >> kilometers;

		cout << "\n-------------------------" << endl
			<< "M - Convert to miles" << endl
			<< "N - Convert to Nautical miles" << endl
			<< "Q - Quit" << endl
			<< "Enter your choice: ";
		cin >> option;

		if (option == 'm' || option == 'M') {
			double miles = kilometers / 1.609;
			cout << "\nThe distance in miles: " << fixed << setprecision(1) << miles << endl;
		}
		else if (option == 'n' || option == 'N') {
			double nauticalMiles = kilometers / 1.852;
			cout << "\nThe distance in nautical miles: " << fixed << setprecision(1) << nauticalMiles << endl;
		}
		else {
			cout << "\nDistance in kilometers: " << kilometers << endl;
		}
			
		break;
	}
	case 3: {
		cout << "\nExiting Part 3. BYE BYE!" << endl;
		break;
	}
	default:
	{ cout << "\nInvalid choice. Going back to main()" << endl; }
	}
}
	
