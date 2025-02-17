//Programmingproject - Botham Adam

//include iostream sourcecode(ex. cout and cin -functions)
#include <iostream>

#include <string>
#include <iomanip> //for output formatting
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <vector>
#include <limits>


using namespace std;
using namespace std::chrono;

//making bool values for the checkers game to validate moves
bool quit = false;
bool retry = false;


//In C/C++ -programs functions have to be declared before defining them
void ShowMenu();
void PersonalID();
void AnnualGrant();
void ChooseFunction();
void PrimeCheck();
void RandCharGenWithChrono();
void SentenceRangeFor();
void CheckersGame();



//The main() function is the start of execution in every program and has to be included them:
int main()
{
	//char type variable are written inside sinlge '' parenthesis and string type are in double ""
	char choosePart;

	cout << "The program starts:" << endl;
	cout << "\n-------------------------" << endl;
	do //do while loop executes once before checking the condition for the loop
	{

		ShowMenu();

		cout << "\nEnter your choice: ";
		cin >> choosePart;
		//switch case is a great way to check for different input to a variable and executing different code based on it
		//It is technically similar to if else if statements but it looks a lot nicer and is more readable
		switch (choosePart) {
		case '1': { PersonalID(); break; }
		case '2': { AnnualGrant(); break; }
		case '3': { ChooseFunction(); break; }
		case '4': { ShowMenu(); break; }
		case '5': { PrimeCheck(); break; }
		case '6': { RandCharGenWithChrono(); break; }
		case '7': { SentenceRangeFor(); break; }
				//section 8 instead of the movie theater i made the checkers game to be editable/"playable"
		case '8': { CheckersGame(); break; }

		case 'q': case 'Q': {
			cout << "\nBYE BYE :)" << endl;
			break;
		}
		default: {
			cout << "\nInvalid choice :( Try again." << endl;
		}
		}
	} while (choosePart != 'q' && choosePart != 'Q');

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
		<< "7: Check Custom Sentence Lenght and Type" << endl
		<< "8: Checkers Game" << endl

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
			}
			else if (points >= 80) {
				grade = 4;
				cout << "\nGrade" << grade;
			}
			else if (points >= 70) {
				grade = 3;
				cout << "\nGrade" << grade;
			}
			else if (points >= 60) {
				grade = 2;
				cout << "\nGrade" << grade;
			}
			else if (points >= 50) {
				grade = 1;
				cout << "\nGrade" << grade;
			}
			else {
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

//Random numbers and outputting characters and clocking the generation of them.
void RandCharGenWithChrono() {
	cout << "\n*** PART 6***" << endl;
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

	cout << "\n*** PART 6 END***" << endl;
}
//input a sentence and find out the conjunctions and punctuation marks, the amount of characters and clauses.
void SentenceRangeFor()
{
	cout << "\n*** PART 7***" << endl;

	string sentence;
	int clauses = 0;
	cout << "\nType a sentence in English: ";	
	//we used cin >> before getline() and that causes problems
	//cin >> leaves a endl or \n "into the void" and then getline() reads it as an finished input so it getline returns blank.

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	getline(cin, sentence);
	

	//making a lists of conjuctions and punctuation to check from in the sentence
	vector<string> conjuctions //https://www.englishclub.com/vocabulary/common-conjunctions-25.php
	{
		"and","that","but","or","as","if","when","than","because","while",
		"where","after","so","though","since","until","whether","before",
		"although","nor","like","once","unless","now","except"
	};
	//list of punctuation marks for sentences
	vector<char> punctuations{'.',',',':',';','!','?'};
	

	//now we want to search and find these in the sentence
	//we use range based for loops (for-each) for this because it goes through the whole list and executes the code through every item/iteration/conjunction of that list
	//const auto& is the most preferred because auto allows the vector to change type
	//const tells that conjuctions list doesn't change
	//and & makes a reference to the original in conjuctions rather than making a copy and that saves memory
	for (const auto& conj : conjuctions)
	{
		//tries to find the item/iteration/conjuction from the sentence 
		//If no matches were found, the find() function returns string::npos
		//so if there is a match a clause is added to the count.
		if (sentence.find(conj) != string::npos)
			clauses++;

	}

	//same for punctuations
	for (const auto& punct : punctuations)
	{
		if (sentence.find(punct) != string::npos)
			clauses++;
	}


	//amount of character in the string
	int charAmount = sentence.size();
	cout << "\nThe amount of characters in the sentence: " << charAmount <<'.'<< endl;

	//so if the amount of clauses is more than 1 then it is a compound/complex sentence otherwise it is a simple sentence
	if (clauses > 1)
		cout << "The sentence is a compound/complex and has " << clauses << " amount of clauses." << endl;
	else
		cout << "The sentence is a simple sentence." << endl;
	
	cout << "\n*** PART 7 END***" << endl;
}

//creating functions for a checkers game

//making the array for the board
void InitializeBoard(vector<vector<char>> &board)
{
	//const int for the 9x9 board with A-H and 1-8 indicators
	const int size = 9;
	//resize the board to 9x9 with empty spaces
	board.resize(size, vector<char>(size, ' '));
	//change the top row to letter indicators and keaving the 0 index empty
	for (int col = 1; col < size; col++)
	{
		//using ASCII int values to change the character to the next starting from A
		//col+1 to leave the "corner square empty"
		//board[0][col + 1] = 'A' + col;	NOT GOOD IT GOES ABOVE THE VECTOR RANGE AND CRASHES 
		// so lets use col = 1; and 'A' + (col - 1);
		board[0][col] = 'A' + (col - 1);
	}
	//change the first/left column to indicate numbers
	for (int row = 1; row < size; row++)
	{
		board[row][0] = '1' + (row - 1);
	}

	//place board pieces ('X' and 'O')
	//loop through each row starting from the second row in the matrix so the first game ro
	for (int row = 1; row < size; row++)
	{
		if (row < 4 || row > 5) //only runs for the first 3 and last 3 rows of the game board
		{
			//go through the columns
			for (int col = 1; col < size; col++)
			{
				//for the checkered pattern
				if ((row + col) % 2 == 0)
				{
					//add the X or O wether on the first three rows or the rest of the rows (see previous if statement)
					board[row][col] = (row < 4) ? 'X' : 'O';
				}
			}
		}
	}

}

//printing the board but not modifying it
void PrintBoard(const vector<vector<char>> &board)
{
	cout << endl;
	//from each row in the board
	for (const auto& row : board)
	{
		//for each cell inside a row have a space between and print the cell ofc
		for (const auto& cell : row)
		{
			cout << cell << " ";
		}
		cout << endl; //cout each row and then the next one to a new line
	}
}
//correct lowercase inputs and convert input to int for vectors indices.
//making bool so that we can validate input.
bool ValidateInput(string &input, int &col, int &row)
{
	//if the input is not 2 then the input is invalid immediately without string to char conversion
	if (input.length() != 2)
		return false;

	//string to char conversion and all caps force
	char colChar = toupper(input[0]); //toupper forces ALLCAPS so that the check for column through char ascii value doesn't fail
	char rowChar = input[1];

	//validate the inputs through char values
	if (colChar < 'A' || colChar > 'H' || rowChar < '1' || rowChar > '8')
		return false;

	//converting char to correct int so they correspond the vector/matrix values

	col = colChar - 'A' + 1; //converting char 'A'-'H' into 1-8
	row = rowChar - '1' + 1; //+1 to shift the start from 0 to 1 

	return true;
}
//Validating movement and movement logic and allow quitting
void movePiece(vector<vector<char>>& board, char player)
{
	

	string from, to;
	//ask for move input
	cout << "\nTo Quit input QQ in both input fields" << endl
		<< "\nPlayer: " << player
		<< ", make your move (e.g. from \"B6\" to \"C5\"): " << endl 
		<< "From: "; cin >> from; cout << "to: "; cin >> to;


	//check if input is for quitting the game
	if (from == "QQ" || from == "qq")
	{
		quit = true;
		return;
	}
		


	if (to == "QQ" || to == "qq")
	{
		quit = true;
		return;
	}
		

	//making integers for ValidateInput arguments
	int fromCol, fromRow, toCol, toRow;

	//Invalid input either from to are invalid
	if (!ValidateInput(from, fromCol, fromRow)||!ValidateInput(to,toCol,toRow))
	{
		cout << "\nInvalid input :( Try again." << endl;
		retry = true;
		return;
	}

	//validate that it is the correct piece
	if (board[fromRow][fromCol] != player)
	{
		cout << "\nThat is NOT your piece!!! Try again." << endl;
		retry = true;
		return;
	}

	//validate the space to be empty before moving
	if (board[toRow][toCol] != ' ')
	{
		cout << "OCCUPIEEED!!! \n Try again." << endl;
		retry = true;
		return;
	}
	
		
	
	//move the piece and empty the start position
	board[toRow][toCol] = player;
	board[fromRow][fromCol] = ' ';
	
		
}
//function that runs the game and well it doesn't follow any rules or have a win condition (yet) but the changing of the pieces works and is validated for incorrect inputs.
void CheckersGame()
{
	cout << "\n*** PART 8***" << endl;

	//reset global quit bool to false when starting a new game to not immediately quit a new game
	quit = false;
	//mkaing a bool for the do while loop
	bool quitGame = false;


	//initialize 2D vector and board
	vector<vector<char>> board;
	InitializeBoard(board);
	
	
	//start with O's aka bottom player
	char currentPlayer = 'O';
		
	
	//do while loop to continue the game until it is exited manually
	do 
	{
		
		PrintBoard(board);
		movePiece(board, currentPlayer);

		//if manually quit
		if (quit)
		{
			cout << "\nExiting game." << endl;
			quitGame = true;
			break;
		}

		if (!retry)
		{
			//change the player after each turn but even if invalid
			currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
		}
	} while (!quitGame);		

	cout << "\n*** PART 8 END***" << endl;
}
