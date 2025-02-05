//Programmingproject - Botham Adam

//include iostream sourcecode(ex. cout and cin -functions)
#include <iostream>
//Windows.h is needed for the צהו letters in the Finnish language
#include <Windows.h>
#include <string>
#include <iomanip> //for output formatting
#include <stdlib.h>
#include <time.h>
#include <chrono>

using namespace std;
using namespace std::chrono;


//In C/C++ -programs functions have to be declared before defining them
void ShowMenu();
void PersonalID();
void AnnualGrant();
void ChooseFunction();
void PrimeCheck();
void Section6();



//The main() function is the start of execution in every program and has to be included them:
int main()
{	
	//char type variable are written inside sinlge '' parenthesis and string type are in double ""
	char choosePart;
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	cout << "The program starts:" << endl;
	cout << "\n-------------------------" << endl;
	do //do while loop executes once before checking the condition for the loop
	{

	 ShowMenu();
	
	 cout << "Enter your choice: ";
	 cin >> choosePart;
	 //switch case is a great way to check for different input to a variable and executing different code based on it
	 //It is technically similar to if else if statements but it looks a lot nicer and is more readable
	switch (choosePart) {
		case '1': { PersonalID(); break;}
		case '2': { AnnualGrant(); break;}
		case '3': { ChooseFunction(); break; }
		case '4': { ShowMenu(); break;}
		case '5': { PrimeCheck(); break;}
		case '6': { Section6(); break; }

		case 'q': case 'Q': {
			cout << "\nBYE BYE :)" << endl;
			break;
		}
		default: {
			cout << "\nInvalid choice :( Try again." << endl;
		}
	}
	} while (choosePart !='q' && choosePart !='Q');
	
	cout << "\n-------------------------\n" << endl;
	cout << "The program has ended and shutdown." << endl;
}

void ShowMenu() {
	cout << "\nChoose which Part/Function to execute:" << endl << endl
		<< "1: Personal ID" << endl
		<< "2: Annual Study Grant" << endl
		<< "3: Choose between 2 functions" << endl
		<< "4: Help" << endl
		<< "5: Prime Number Check" << endl
		<< "6: Random Character Genertor and Timer" << endl

		<< "Q: Quit" << endl;
}

//Input asked info and outputs given info
void PersonalID()
{
	
	string name;
	int age;
	int studentNum;
	float height;
	float weight;

	
	
	cout << "\n*** PART 1***" << endl;
	cout << "Input the following:\nName: "; cin >> name;
	cout << "Age: "; cin >> age;
	cout << "Student number: "; cin >> studentNum;
	cout << "Height: "; cin >> height;
	cout << "Weight: "; cin >> weight;

	cout << "\nGiven info:\nName: " << name << "\nAge: " << age << "\nStudent ID: " << studentNum << "\nHeight: " << height << "\nWeight: " << weight << endl;	
	cout << "\n*** PART 1 END***" << endl;
}

//input grant months per year and amount and outputs annual grant amount
void AnnualGrant()
{
	int months;
	float grantAmount;
	float grantPerYear;
	cout << "\n*** PART 2***" << endl;
	cout << "\nStudy grant months per year\nMonths: "; cin >> months;
	cout << "Monthly grant amount: "; cin >> grantAmount;
	grantPerYear = months * grantAmount;
	cout << "Annual study grant amount: " << grantPerYear << "€" << endl;
	cout << "\n*** PART 2 END***" << endl;
}
//Choose betwenn two functions and practiced using switch cases
void ChooseFunction()
{
	//making the ability to choose a function to do with a switch case
	int choice;
	cout << "\n*** PART 3***" << endl;
	cout << "\n1 - Convert Exam points to a grade\n2 - Convert distance from kilometers\n3 - Exit\nEnter your choice: ";
	cin >> choice;

	switch (choice) 
	{
	case 1: {
		//Function 1: Grades
		int points;
		cout << "\n*** Points to Grades ***";
		cout << "\nInsert exam points (0-100): "; cin >> points;


		if (points < 0 || points > 100) {
			cout << "\nInvalid points. Gong back to main menu." << endl;
		}
		else {
			//cannot use a switch statements because the cases have to be constants and cannot be ranges of numbers, so using if else if for ranges is the best way
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
			<< "Q - Exit" << endl
			<< "Enter your choice: ";
		cin >> option;
		//switch case can execute the same code for different cases by nesting them like this
		//works well for a very small range but becomes very impractical after a couple in a row and better off using if else if.
		switch (option) {
			case 'm':case 'M':
			{
				double miles = kilometers / 1.609;
				cout << "\nThe distance in miles: " << fixed << setprecision(1) << miles << endl;
				break;
			}
			case'n':case'N':
			{
				double nauticalMiles = kilometers / 1.852;
				cout << "\nThe distance in nautical miles: " << fixed << setprecision(1) << nauticalMiles << endl;
				break;
			}
			case 'q':case 'Q':
			{
				cout << "\nGoing back to Part 3 menu." << endl;
				break;
			}
			default:
				cout << "\nDistance in kilometers: " << kilometers << endl;
		}
		break;
	}
	case 3: {
		cout << "\nExiting Part 3. BYE BYE!" << endl;
		break;
	}
	default:
	 cout << "\nInvalid choice. Going back to main menu." << endl; 
	}
	cout << "\n*** PART 3 END***" << endl;
}
//using for loops to check if a number is a primenumber
void PrimeCheck() {
	int primeNum;

	cout << "\n*** PART 5***" << endl;
	cout << "\nInput a number to check if it is prime or not: "; cin >> primeNum;	
	
	bool isPrime = true;
	
	for (int i = 2; i * i <= primeNum; i++) {//checking until the square root of the number given because checking more than that is redundant
		if (primeNum % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << "\nThe inputed number is a prime number." << endl;
	}
	else {
		cout << "\nThe inputed number is NOT a prime number." << endl;
	}
	cout << "\n*** PART 5 END***" << endl;
}


void Section6() {
	//auto lets the compiler figure out the type of variable 
	auto start = system_clock::now();//makes a time stamp (before the output) named start 
	
	duration<double> sec; //sets the duration count in double so it has decimal points

	//Initialize rand
	srand(time(NULL));

	//random int value between 250,000 and 500,000
	int numChars = rand() % 250001 + 250000;
	

	
	//for loop to generate random letters the amount of the ranodmized int
	for (int i = 0; i < numChars; ++i) {
		char rndChar = rand() % 26 + 97; 
		cout << rndChar;
	}

	auto end = system_clock::now();

	//counting a duration between start and end in seconds (in full seconds?)
	sec = duration_cast<seconds>(end - start);
	//printing the stuff
	cout << "\nRandomizing and printing " << numChars
		<< " letters took: " << sec.count() << " seconds." << endl;
}