#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream output;
	fstream input;
	input.open("Exercise13_1.txt", ios::in);

	if (input.fail()) {
		output.open("Exercise13_1.txt", ios::out);
		for (int i = 0; i < 100; i++)
			output << i << " ";
		output.close();
		cout << "file creation\n";
	}
	else {
		output.open("Exercise13_1.txt", ios::out | ios::app);
		for (int i = 100; i > 0; i--)
			output << i << " ";
		cout << "writing number\n";
		output.close();
		input.close();
	}
	return 0;
}
