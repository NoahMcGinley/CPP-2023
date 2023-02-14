#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int random;
    unsigned seed = time(0);
    srand(seed);
    random = rand() % 1000;
    cout << random;

}