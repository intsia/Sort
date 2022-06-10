#include <iostream>

void Choisesort(int arr[], size_t size)
{
	// проходит по всему массиву, выбирает самое большое и самое маленькое значение
	// ставит самое большое в конец, самое маленькое в начале

	for (size_t progress = 0; progress < size / 2; ++progress)
	{
//		std::cout << "progress = " << progress << '\n';

		int i = progress;
		int min = arr[i];
		int max = arr[i];


		while (i < size - progress)
		{
			if (arr[i] < min)
			{
				min = i;
			}
			if (arr[i] > max)
			{
				max = i;

			}
			++i;
		}
		
		int buffer = arr[progress];
		arr[progress] = arr[min];
		arr[min] = buffer;

		buffer = arr[size - progress - 1];
		arr[size - progress - 1] = arr[max];
		arr[max] = buffer;

		
/*
		std::cout << "Array values: ";
		for (size_t q = 0; q < size; ++q)
		{
			std::cout << '[' << q << ']' << " = " << arr[q] << "; ";
		}
		std::cout << '\n';
*/
	}
}