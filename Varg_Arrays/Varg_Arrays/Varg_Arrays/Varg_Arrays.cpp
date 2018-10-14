/* 
Rocky Vargas
Concepts and Arrays
02/02/2017
*/

#include <iostream>

using namespace std;

int main()
{
	// Asking user if they want to play again
	char runAgain = 'y';

	do {
		// The three array variables
		double userArray[4];
		double userArray2[4];
		double userArray3[4];

		// Prompting user to enter four numbers for first array
		cout << "Enter four numbers: ";
		for (int i = 0; i < 4; i++)
		{
			cin >> userArray[i];
		}

		// Prompting user for second set of numbers for second array
		cout << "Enter another four numbers: ";
		for (int i = 0; i < 4; i++)
		{
			cin >> userArray2[i];
		}

		// Adding together first and second arrays
		cout << "Your numbers added together are: " << endl;
		for (int i = 0; i < 4; i++)
		{
			userArray3[i] = userArray[i] + userArray2[i];
			cout << userArray[i] << " + " << userArray2[i] << " = " << userArray3[i] << endl;
		}

		// Displaying Just the third array
		cout << "The third array numbers are: " << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << userArray3[i] << endl;
		}

		// Asking user if they would like to play again
		cout << "Would you like to enter another eight numbers? (Y/N): ";
		cin >> runAgain;

	} while (runAgain == 'Y' || runAgain == 'y');

	// Thanking user for using the program
	cout << "Thank you for using this program!" << endl;


	system("pause");
	return 0;
}