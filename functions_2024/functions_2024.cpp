#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "functionLib.h"
#include "averageFinder.h"

void inc(int &val)
{
	val++;
}

int incRet(int val)
{
	int v = val;
	return ++v;
}


int main()
{
	//enable random number genration
	srand(time(NULL));

	//declare array
	std::vector <int> vData = {};

	//fill array with random numers
	fillRandomArray(vData,10,0,99);

	//print current array state
	printArray(vData);

	//sort array via sort function
	std::sort(vData.begin(),vData.end());

	//print current array state
	printArray(vData);

	//find average
	float avg = findAverage(vData);
	std::cout << "avg = " << avg << "\n";

	//fund sum
	int c = sum(10, 5);
	std::cout << "10 + 5 = " << c << "\n";

	int a = 10;
	std::cout << "a = " << a << "\n";
	inc(a);
	std::cout << "inc(a) = " << a << "\n";
	std::cout << "inc(a) = " << incRet(a) << "\n";

	//delay program end
	system("pause");
}