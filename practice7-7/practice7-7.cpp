#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(0));
	int counts[10] = { 0 };
	int num;
	for (int i = 0; i < 100; i++) {
		num = rand() % 10;
		counts[num]++;
	}
	for (int i = 0; i < 10; i++)
		cout << setw(3) << i;
	cout << "\n-------------------------------\n";
	for (int i = 0; i < 10; i++)
		cout << setw(3) << counts[i];

	return 0;
}
