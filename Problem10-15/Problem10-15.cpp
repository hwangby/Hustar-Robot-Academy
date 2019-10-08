#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	char repeat;
	string guess;
	srand((unsigned int)time(0));
	string words[] = { "hangman","hustar","programming","binch", "spider",
						"georgia","starcraft","global", "problem", "huston"
						"joker","onepiece","music","samsung","apple"};
	string hidden = "";
	string ans;
	int count = 0;
	do {
		hidden = "";
		repeat = 'a';
		ans = words[rand() % 15];
		for (int i=0; i<ans.size();i++)
			hidden += "*";
		count++;
		while (true) {
			if (hidden == ans) {
				cout << "The word is " << ans << ". You missed " << count << " time";
				if (count > 1) {
					cout << "s\n\n";
				}
				else {
					cout << "\n\n";
				}
				break;
			}
			cout << "(Guess) Enter a letter in word " << hidden << " > ";
			cin >> guess;

			if (ans.find(guess) == string::npos) {
				cout << "     " << guess << " is not in the word\n";
				continue;
			}
			else if (hidden.find(guess) < 100) {
				cout << "     " << guess << " is already in the word\n";
			}
			else {
				for (int j = 0; j < ans.size(); j++) {
					if (guess[0] == ans[j]) {
						hidden.replace(j, 1, guess);
					}
				}
			}
		}
		while (repeat != 'y' && repeat != 'n') {
			cout << "Do you want to guess for another word? Enter y or n>";
			cin >> repeat;
		}
	} while (repeat == 'y');

	return 0;
}