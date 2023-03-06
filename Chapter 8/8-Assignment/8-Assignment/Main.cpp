
#include <iostream>
using namespace std;

// Prototype Functions
int menu();
void accountValidation();

/*-----------------------------------------
# menu() accepts no aguments
# it outputs the menu and receives a choice
# from the user
-------------------------------------------*/
int main()
{
	// Receives choice from menu()
   int choice = menu();

   // Determines from choice which function to call
   switch (choice)
   {
   case 1:
	   break;
   case 2:
	   break;
   case 3:
	   break;
   case 4:
	   break;
   case 5:
	   cout << "Exited Program\n";
	   break;
   }
}
