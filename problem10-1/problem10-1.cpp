#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2;
	cout << "Enter a string s1: ";
	cin >> s1;
	cout << "Enter a string s2: ";
	cin >> s2;
	string sortedS1 = s1, sortedS2 = s2;
	sort(sortedS1.begin(), sortedS1.end());
	sort(sortedS2.begin(), sortedS2.end());
	
	if (sortedS1 == sortedS2) {
		cout << s1 << " and " << s2 << " are anagrams";
	}
	else {
		cout << s1 << " and " << s2 << " are not anagrams";
		return 0;
	}
	
}
