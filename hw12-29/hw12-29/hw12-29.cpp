#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "Enter number n: ";
	cin >> n;

	cout << "Enter " << n << " rows of letters separated by spaces:\n";
	vector<vector<char>> latinSquare(n);
	vector<char> row(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char element;
			cin >> element;
			if (element - 'A' >= n) {
				cout << "Wrong input: the letters must be from A to " << char('A' + n-1) << endl;
				return 0;
			}
			row[j] = element;
		}
		latinSquare[i] = row;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = j+1; k < n; k++) {
				if (latinSquare[i][j] == latinSquare[i][k] || latinSquare[j][i] == latinSquare[k][i]) {
					cout << "The input array is NOT a Latin square\n";
					return 0;
				}
			}
		}
	}
	
	cout << "The input array is a Latin square" << endl;

	return 0; 
}