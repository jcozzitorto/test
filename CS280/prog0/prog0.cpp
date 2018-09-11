#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main (int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		std::string s = argv[i];
		char ch;

		if (s.at(0) == 'S') {
			cout << s;
		}

		else if (s.at(0) == 'L') {
			for (int j = 0; j < s.length(); j++) {
				if (isupper(s.at(j))) {	
					ch = tolower(s.at(j));
					cout << ch;
				}

				else cout << s.at(j);
			}
			cout << endl;
		}

		else if (s.at(0) == 'U') {
			for (int k = 0; k < s.length(); k++) {
				if(islower(s.at(k))) {
					ch = toupper(s.at(k));
					cout << ch;
				}

				else cout << s.at(k);
			}
			cout << endl;
		}

		else if (s.at(0) == 'r') {
			for (int l = s.length() - 1; l > 0; l--) {
				cout << s.at(l);
			}
			cout << endl;
		}

		else if (s.at(0) == 'R') {
			for (int m = s.length() - 1; m > 0; m--) {
				if (islower(s.at(m))) {
					ch = toupper(s.at(m));
					cout << ch;
				}

				else cout << s.at(m);
			}
			cout << endl;
		}


		else cout << "FAIL" << endl;

	}
}
