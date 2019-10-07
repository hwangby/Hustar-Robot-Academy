#include <iostream>
using namespace std;

int main()
{
	int numbers[10];
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
	}
	cout << "The reversed numbers: ";
	for (int i = 0; i < 10; i++) {
		cout << numbers[9 - i] << " ";
	}
}
