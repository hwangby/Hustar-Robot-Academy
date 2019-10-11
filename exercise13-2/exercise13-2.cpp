#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename;
	cout << "Enter file name : ";
	cin >> filename;
	fstream wordCount;
	
	wordCount.open(filename, ios::out);
	for (int i = 0; i < 10; i++) // 문자의 수 10개 설정
		wordCount << i << " ";
	wordCount.close();

	wordCount.open(filename, ios::in);
	if (wordCount.fail()) {
		cout << "the file is not exist";
		return 0;
	}
	int count = 0;
	while(!wordCount.eof()) {
		string str;
		wordCount >> str;
		count++;
	}
	cout << "number of character : " << count-1; // 10
	return 0;
}
