#include <iostream>
using namespace std;

int main()
{
	int numbers[10] = {0};
	bool check = true;
	
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
	}
	cout << "The distinct numbers are : ";
	for (int i = 0; i < 10; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (numbers[j] == numbers[i]) {
				check = false;
				break;
			}
		}
		if (check) {
			cout << numbers[i] << " ";
		}
		else {
			check = true;
			continue;
		}
	}

	return 0;
}
