
#include <iostream>
using namespace std;

int main()
{
    /*Program 5-13
    Accepts no arguments
    Uses a sentinel controlled while loop*/

    int score = 0;
    int total = 0;
    int count = 0;

    cout << "Enter the points your team has earned per game,\n"
        << "Enter -1 when you have entered all scores\n\n";
    
    while (score != -1)
    {
        cout << "\nEnter the points for game " << count << ": ";
        count++;
        cin >> score;
        total += score;
      
    }
    cout << "Your team scored a total of " << total + 1 << " points.";
}
