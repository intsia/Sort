#include <iostream>

void ArrPrint(int arr[], size_t size)
{
	std::cout << "Array values: ";
	for (size_t i = 0; i < size; ++i)
	{
		std::cout << '[' << i << ']' << " = " << arr[i] << "; ";
	}
	std::cout << '\n';
}