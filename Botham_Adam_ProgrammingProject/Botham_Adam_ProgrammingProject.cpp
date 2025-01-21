//Programmingproject - Botham Adam

//include iostream sourcecode(ex. cout and cin -functions)
#include <iostream>
//Windows.h is needed for the צהו letters in the Finnish language
#include <Windows.h>
#include <string>

using namespace std;

//In C/C++ -programs functions have to be declared before defining them
void Part1();
void Part2();


//The main() function is the start of execution in every program and has to be included them:
int main()
{	
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);

	Part1();
	
	Part2();
	
	
	
	cout << "\nThe program has ended and shutdown." << endl;
}

//Input asked info and outputs given info
void Part1()
{
	string name;
	int age;
	int studentNum;
	float height;
	float weight;

	
	cout << "The program starts: \n" << endl;

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


