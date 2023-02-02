
#include <iostream>
using namespace std;

//////////////////////////////////////////
/* Function displayMessage accepts no arguments
It outputs a message to the user */
//////////////////////////////////////////

void displayMessage()
{
    cin.get();
    cout << "Hellow from function displayMessage!\n";
    cout << "Returning you to function main.\nPause...\n";
}

//////////////////////////////////////////
/* Function main accepts no arguments
It outputs a message to the user
Then calls function displayMessage */
//////////////////////////////////////////
int main()
{
    cout << "Helo from main.\n"
        << "Please hold while I forward you to function displayMessage.\nPause...\n";
    // call displayMessage
    for (int index = 0; index <= 5; index++)
    {
        displayMessage();
        cin.get();
        cout << "Welcome back to function main. Have a great day.\nPause...\n";
    }

    return 0;
}
