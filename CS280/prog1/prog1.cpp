#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main (int argc, char *argv[]) {
	
	ifstream infile;

	if (argv[1] == NULL) {
		cout << "NO PHRASE LENGTH" << endl;
		return -1;
	}
	
	if (stoi(argv[1]) <= 0) {
		cout << "INVALID PHRASE LENGTH" << endl;
	}

	else if (!isdigit(stoi(argv[1]))) {
		cout << "INVALID PHRASE LENGTH" << endl;
	}

	if (argv[2] == NULL) {
		cout << "NO MODE" << endl;
		return 0;
	}

	if (string(argv[2]) == "all") {
		cout << "all " ;
	}

	else if (string(argv[2]) == "top") {
		cout << "top " ;
	}

	if (argv[3] == NULL)  {
		cout << "NO FILES GIVEN" << endl;
	}

	for (int i = 4; i < argc; i++) {
		string s = argv[i];
		infile.open(s);

		if (infile.is_open()) {
			 ;
			infile.close();
		}

		else if (!infile.is_open()) {
			cout << "BAD FILE " << s << endl;
		}
	}
}

