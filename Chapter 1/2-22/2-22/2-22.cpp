
#include <iostream>
using namespace std;

int main()
{
    int fivePercent;
    int sevenPercent;
    int tenPercent;

    int contribution;
    fivePercent = .05 * 6000;
    sevenPercent = .07 * 6000;
    tenPercent = .1 * 6000;

    cout << "Your contribution at 5% is $" << fivePercent << endl;
    cout << "Your contribution at 7% is $" << sevenPercent << endl;
    cout << "Your contribution at 10% is $" << tenPercent << endl;

    return 0;
}
