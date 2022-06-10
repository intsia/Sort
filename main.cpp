#include <iostream>
#include "Sort.h"

int main()
{
	int numbers[11] = { 8, 2, 1, 4, 5, 6, 7, 3, 9, 0, 10 };
	ArrPrint(numbers, 11);
	Choisesort(numbers, 11);
	ArrPrint(numbers, 11);
}