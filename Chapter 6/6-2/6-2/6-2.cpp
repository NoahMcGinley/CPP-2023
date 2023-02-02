
#include <iostream>
using namespace std;

//////////////////////////////////////////
/* Function displayMessage accepts no arguments
It outputs a message to the user */
//////////////////////////////////////////
void displayMessage()
{
    cout << "Hellow from function displayMessage!\n";
    deepCall();
}

//////////////////////////////////////////
/* Function deepcall accepts no arguments
It outputs a message to the user and calls
deepercall*/
//////////////////////////////////////////
void deepCall()
{
    cout << "Hello from deepCall.\n";
    deeperCall();
}

//////////////////////////////////////////
/* Function displayMessage accepts no arguments
It outputs a message to the user */
//////////////////////////////////////////
void deeperCall()
{
    cout << "Hello from deeperCall.\n";
}

//////////////////////////////////////////
/* Function main accepts no arguments
It outputs a message to the user
Then calls function displayMessage */
//////////////////////////////////////////
int main()
{
    cout << "Helo from main.\n";
    // call displayMessage
    displayMessage();
    cout << "Welcome back to function main. Have a great day.\nPause...\n";

    return 0;
}
