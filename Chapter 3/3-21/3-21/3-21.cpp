
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	/*Program 3-21
	accepts no arguments
	demonstrates three ways to use cin.get() to pause a program*/

	char ch; // Defines a char variable to take an input during pause

	cout << "THe program has paused once... Press Enter to move on. ";
	cin.get(ch);
	cout << "The program has paused a second time.. Press Enter again to move on. ";
	ch = cin.get();
	cout << "The program has paused a third time... Press Enter again to end the program. ";
	cin.get();
	cout << "The program has terminated. Thank you!\n";

}