#include "averageFinder.h"

float findAverage(std::vector<int> ourArray)
{
	int l = ourArray.size();
	int sum = 0;
	for (int i = 0; i < l; i++)
	{
		sum += ourArray[i];
	}
	float average = (float)sum / (float)l;
	return average;
}

int sum(int a, int b)
{
	return a + b;
}