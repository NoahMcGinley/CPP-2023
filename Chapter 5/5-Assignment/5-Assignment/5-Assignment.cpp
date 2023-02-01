#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{	
	// Initializes variables
	int choice;

	cout << "Chapter 5 assignment\n";

	do
	{
		cout << "\n\nEnter a choice (1-6)\n"
			<< "1. Exercise #20 - Random Number Guessing Game\n"
			<< "2. Exercise #24 - Numeric Processing\n"
			<< "3. Exercise #23 - Triangle Patterns\n"
			<< "4. Exercise #26 - Web Page\n"
			<< "5. Exercise #27 - Average Steps\n"
			<< "6. Quit\n"
			<< "Choice: ";
		cin >> choice;
		cin.ignore();
		cout << "-------------------------------------------------\n";

		switch (choice)
		{
		//////////////////////////////////////////////////////////////////////////////////
		case 1:
		{
			// Exercise #20 - Random Number Guessing Game
			
			// Initializes variables
			int num, guess;
			char game;
			unsigned seed = time(0);

			// Starts game
			cout << "Exercise #20 - Random Number Guessing Game\n";
			cout << "Welcome to the number guessing game, enter 'y' to start, and any other character to quit: ";
			cin >> game;

			// Generates number
			srand(seed);
			num = rand() % 1000;

			// Prompts user to guess number
			cout << "\nGuess a number: ";
			cin >> guess;

			if (guess < 1000 && guess > 0)
			{
				while (!(guess == num))
				{
					if (guess < num)
					{
						cout << "Too low! Guess again: ";
						cin >> guess;
					}
					if (guess > num)
					{
						cout << "Too high! Guess again: ";
						cin >> guess;
					}
				}
				cout << "Correct!\n";
			}
			else
				cout << "Invalid!\n";
		}
		break;
		//////////////////////////////////////////////////////////////////////////////////
		case 2:
		{
			// Exercise #24 - Numeric Processing

			// Initializes variables
			ifstream infile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\Random.txt");
			int numNumbers = 0, sum = 0, max = 0, min = 1000, number;
			float average;

			cout << "Exercise #24 - Numeric Processing\n";

			// Validates file
			if (!infile)
			{
				cout << "Invalid file name\n";
			}
			else
			{
				// Loops to read file
				while (infile >> number)
				{
					// Finds minimum and maximum values
					if (number > max)
					{
						max = number;
					}
					if (number < min)
					{
						min = number;
					}
					// Adds to totals
					sum += number;
					numNumbers++;
				}
				// Closes file and outputs result
				infile.close();
				average = static_cast<float>(sum) / numNumbers;
				cout << "The number of numbers in the file is: " << numNumbers << endl
					<< "The sum of all the numbers is: " << sum << endl
					<< "The average of all the numbers is: " << average << endl
					<< "The maximum value is: " << max << endl
					<< "The minimum value is: " << min;
			}
		}
		break;
		//////////////////////////////////////////////////////////////////////////////////
		case 3:
		{
			// Exercise #23 - Triangle Patterns

			cout << "Exercise #23 - Triangle Patterns\n";

			// Loops through the rows
			for (int index = 0; index <= 10; index++)
			{
				// Loops through the stars per row
				for (int star = 0; star <= index; star++)
				{
					cout << "*";
				}
				cout << "\n";
			}
			for (int index2 = 0; index2 <= 10; index2++)
			{
				for (int star2 = 10; star2 >= index2; star2--)
				{
					cout << "*";
				}
				cout << "\n";
			}
		}
		break;
		//////////////////////////////////////////////////////////////////////////////////
		case 4:
		{
			// Exercise #26 - Web Page

			// Initializes variables
			string name, description;
			ofstream outFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\randomwebpage.html");

			// Validates file
			if (!outFile)
			{
				cout << "File not found";
			}
			else;
			{
				cout << "Enter a name: ";
				cin >> name;
				cout << "Enter a description: ";
				cin.ignore();
				getline(cin, description);

				// Writes to file
				outFile << "<html>"
					<< "<head>"
					<< "</head>"
					<< "<body>"
					<< "<center>"
					<< "<h1>"
					<< name
					<< "</h1>"
					<< "</center>"
					<< "<hr />"
					<< description
					<< "<hr />"
					<< "</body>"
					<< "</html>";
			}
			// Closes file and outputs success message
			outFile.close();
			cout << "Successfuly created webpage\n";
		}
		break;
		//////////////////////////////////////////////////////////////////////////////////
		case 5:
		{
			// Exercise #27 - Average Steps

			// Initializes variables
			ifstream inFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\steps.txt");
			float average = 0;
			int total = 0, num = 0, steps, day = 1;

			// Validates file
			if (!inFile)
			{
				cout << "File not found\n";
			}
			else
			{
				// Year
				for (int index = 1; index <= 365; index++)
				{
					// January
					if (index <= 31)
					{
						while (index <= 31)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "January total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// Febuary
					if (index <= 59)
					{
						while (index <= 59)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "Febuary total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// March
					if (index <= 90)
					{
						while (index <= 90)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "March total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// April
					if (index <= 120)
					{
						while (index <= 120)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "April total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// May
					if (index <= 151)
					{
						while (index <= 151)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "May total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// June
					if (index <= 181)
					{
						while (index <= 181)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "June total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// July
					if (index <= 212)
					{
						while (index <= 212)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "July total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// August
					if (index <= 243)
					{
						while (index <= 243)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "August total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// September
					if (index <= 273)
					{
						while (index <= 273)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "September total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// October
					if (index <= 303)
					{
						while (index <= 303)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "October total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// November
					if (index <= 334)
					{
						while (index <= 334)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "November total followed by average: " << total << " " << average << endl;
						total = 0;
					}
					// December
					if (index <= 365)
					{
						while (index <= 365)
						{
							inFile >> steps;
							total += steps;
							index++;
						}
						average = static_cast<float>(total) / 31;
						cout << "December total followed by average: " << total << " " << average << endl;
						total = 0;
					}
				}
			}
			inFile.close();
		}
		break;
		//////////////////////////////////////////////////////////////////////////////////
		default:
		{
			cout << "Exited Program\n";
		}
		}
	}while (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5);

	return 0;
}
