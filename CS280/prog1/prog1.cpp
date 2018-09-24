#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main (int argc, char *argv[]) {
	
	ifstream infile;

	if (argc < 1) {
		cerr << "NO VALID ARGUMENTS" << endl;
		return -1;
	}
	
	if (string(argv[1]) == "0") {
	        cout << "0 " ;
	}

	else if (string(argv[1]) == "1") {
		cout << "1 " ;
	} 

	else if (string(argv[2]) == "all") {
		cout << "all " ;
	}

	else if (string(argv[2]) == "top") {
		cout << "top " ;
	}

	for (int i = 3; i < argc; i++) {
		string s = argv[i];
		infile.open(s);

		if (infile.is_open()) {
			cout << s << " " ;
			infile.close();
		}

		else if (!infile.is_open()) {
			cout << "nonexistantfile " ;
		}
	}
}	
