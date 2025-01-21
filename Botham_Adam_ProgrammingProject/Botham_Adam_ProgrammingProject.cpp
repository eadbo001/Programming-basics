//Programmingproject - Botham Adam
// 
//Let's start with instructions: replace "Surname Forename" with your own name
//and then delete instructions from the file that you don't need anymore!


//include iostream sourcecode(ex. cout and cin -functions)
#include <iostream>
//Windows.h is needed for the צהו letters in the Finnish language
#include <Windows.h>
#include <string>

//Tell the code that we are using the namespace std (C++ standard librabry functions are included in this namespace)
using namespace std;

//In C/C++ -programs functions have to be declared before defining them
void Part1();
void Part2();
void Part3();

//The main() function is the start of execution in every program and has to be included them:
int main()
{
	//Finnish letters
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);

	string name;
	int age;
	int studentNum;
	float height;
	float weight;

	//The cout-function outputs
	cout << "The program starts: \n" << endl;

	cout << "Input the following:\nName: "; cin >> name;
	cout << "Age: "; cin >> age;
	cout << "Student number: "; cin >> studentNum;
	cout << "Height: "; cin >> height;
	cout << "Weight: "; cin >> weight;



	//Inside functions you can call for other functions in any order.    
	Part1();
	//The program "jumps" to execute the called function and then returns to the line after the call.
	//Let's call another function
	Part2();
	//And a third one.
	Part3();


	//Programs are usually written to run continuously and typically using a loop.
	//Without a loop, the program ends when there are no more lines to execute in the main function
	cout << "\nThe program has ended and shutdown." << endl;
}

//set Num variables and sum them together and then output the sum
void Part1()
{
	int months;
	float grantAmount;
	float grantPerYear;
	cout << "\nStudy grant months per year\nMonths: "; cin >> months;
	cout << "\nMonthly grant amount: "; cin >> grantAmount;
	grantPerYear = months * grantAmount;
	cout << "\nAnnual study grant amount: " << grantPerYear << "€";
}

//two integer variables that switch values
void Part2()
{
	
}

void Part3()
{

}

