#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int rng();
string userPick();
string cpuPick();

int main()
{
	const int SIZE = 6;
	string QB[SIZE] = { "Josh Allen", "Patrick Mahomes", "Jalen Hurts", "Joe Burrow", "Justin Fields", "Lamar Jackson" };
	string RB[SIZE] = { "Christian McCaffrey", "Jonathan Taylor", "Austin Ekeler", "Saquon Barkley", "Kenneth Walker", "Nick Chubb", "Derrick Henry", "Josh Jacobs", "Travis Etienne", "Breece Hall", "Najee Harris", "Tony Pollard" };
	string WR[SIZE] = 
	string TE[SIZE] =


	
	for (int round = 1; round <= 4; round++)
	{

	}

}


string userPick()
{
	string upick;
	cout << "Pick: ";
	cin >> upick;
	return upick;
}


string cpuPick()
{
	return string();
}

int rng()
{
	srand(time(0));
	int a = rand() % 6;
	return a;
}