#include <iostream>

int main() {
	const int SIZE = 5;
	int currentSize = SIZE;
	int arr[SIZE] = { 1, 2, 3, 4, 5 };

	//delet the element by index 
	int index;
	std::cout << "Enter the index of the element you want to delete: ";
	std::cin >> index;
	for (int i = index; i < currentSize; i++)
	{
		if (i >= index) {
			arr[i] = arr[i + 1];
		}
		//else {
			//arr[i] = arr[i];
		//}
	}
	return 0;
}