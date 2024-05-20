#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int SIZE = 10;
	int currentSize = SIZE;
	int arr[SIZE];
	
	cout << "Array: ";
	for (size_t i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Array after removing zeros: ";
	for (size_t i = 0; i < currentSize; i++) {
		if (arr[i] == 0) {
			for (size_t j = i; j < currentSize - 1; j++) {
				arr[j] = arr[j + 1];
			}
			currentSize--;
			cout << arr[i] << " ";
		}
		else {
			arr[i] = arr[i];
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	return 0;
}