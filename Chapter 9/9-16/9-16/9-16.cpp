#include <iostream>
using namespace std;

int* duplicateArray(int*, int);
void* displayArray(int[], int);

int main()
{
	int array1[3] = { 1, 2, 3 };
	int array2[4] = { 4, 5, 6, 7};
	int array3[5] = { 8, 9, 10, 11, 12 };

	int* dup1 = duplicateArray(array1, 3);
	displayArray(dup1, 3);

}

int* duplicateArray(int* array, int size)
{
	if (size == 3)
	{
		int* newArray = array;
		return newArray;
	}
	else
	{
		return nullptr;
	}
}

void displayArray(int[] array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array;
		*array++;
	}
}