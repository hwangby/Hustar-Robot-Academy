#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	srand(time(NULL));
	fstream output("Exercise13_4.txt", ios::out);
	for (int i = 0; i < 100; i++) {
		output << rand() % 100 << ' ';
	}
	output.close();

	fstream input("Exercise13_4.txt", ios::in | ios::out);
	vector<int> v;
	while (!input.eof()) {
		int num;
		input >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	input.clear();
	input.seekg(0, ios::beg);
	for (int i = 0; i < 100; i++) {
		input << v[i] << ' ';
	}
	input.close();

	cout << "Done";

	return 0;
}