#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int SIZE = 5;
	int arr_1[SIZE];
	int arr_2[SIZE];
	int arr_3[SIZE*2];
	
	srand(time(0));
	cout << "Array 1: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		arr_1[i] = rand() % 20 - 10;
		cout << arr_1[i] << " ";
	}
	cout << endl << "Array 2: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		arr_2[i] = rand() % 20 - 10;
		cout << arr_2[i] << " ";
	}
	cout << endl;
	cout << "Array 3: ";
	int arr_3_index = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr_1[i] < 0)
		{
			arr_3[arr_3_index] = arr_1[i];
			arr_3_index++;
		}
		if (arr_2[i] < 0)
		{
			arr_3[arr_3_index] = arr_2[i];
			arr_3_index++;
		}
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr_1[i] == 0)
		{
			arr_3[arr_3_index] = arr_1[i];
			arr_3_index++;
		}
		if (arr_2[i] == 0)
		{
			arr_3[arr_3_index] = arr_2[i];
			arr_3_index++;
		}
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr_1[i] > 0)
		{
			arr_3[arr_3_index] = arr_1[i];
			arr_3_index++;
		}
		if (arr_2[i] > 0)
		{
			arr_3[arr_3_index] = arr_2[i];
			arr_3_index++;
		}
	}
	for (size_t i = 0; i < SIZE * 2; i++)
	{
		cout << arr_3[i] << " ";
	}cout << endl;
	
	return 0;
}