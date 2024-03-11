#include "functionLib.h"

//generates random value in given diapason
int genRandomValueInRange(int min, int max)
{
	return (rand() % (max - min + 1)) + min; //random value [arrMin .. arrMax]
}

//fills array (vector) of given length with random numbers in inteval
void fillRandomArray(std::vector<int> &ourArray,
	int arrLength, int arrMin, int arrMax)
{
	for (int i = 0; i < arrLength; i++)
	{
		ourArray.push_back(genRandomValueInRange(arrMin, arrMax));
	}
}

//prints out an array (vector) provided as a parameter
void printArray(std::vector<int> ourArray)
{
	for (int i = 0; i < ourArray.size(); i++)
	{
		std::cout << i << ") " << ourArray[i] << "\n";
	}
}