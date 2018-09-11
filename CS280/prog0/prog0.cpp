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
			for (int j = 1; j < s.length() - 1; j++) {
				if (isupper(s.at(j))) {	
					ch = tolower(s.at(j));
					cout << ch;
				}
				else cout << s.at(j);
			}
		}

		else cout << "FAIL" << endl;

	}
}
